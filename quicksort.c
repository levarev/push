/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyov <lyov@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:38:20 by lyov              #+#    #+#             */
/*   Updated: 2026/03/19 12:30:13 by lyov             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	partition(int *arr, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	j = low;
	i = low - 1;
	pivot = arr[high];
	while (j <= high - 1)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
		j++;
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);	
}

void	arrsort(int *arr, int low, int high)
{
	int	pi;

	if (low < high)
	{
		pi = partition(arr, low, high);
		arrsort(arr, low, pi - 1);
		arrsort(arr, pi + 1, high);
	}
}

int	get_median(t_list **a, int size)
{
	int		*arr;
	int		i;
	int		median;
	t_list	*temp;

	i = 0;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		exit(1);
	temp = *a;
	while (i < size && temp)
	{
		arr[i] = temp->num;
		i++;
		temp = temp->next;
	}
	arrsort(arr, 0, size - 1);
	median = arr[size / 2];
	free(arr);
	return (median);
}

void	sort_small(t_list **a, int size)
{
	if (size == 1)
		return ;
	if (size == 2)
	{
		if ((*a)->num > (*a)->next->num)
			sa(a);
		return ;
	}
	while (!((*a)->num < (*a)->next->num && (*a)->next->num < (*a)->next->next->num))
	{
		if ((*a)->num > (*a)->next->num)
			sa(a);
		else if ((*a)->next->num > (*a)->next->next->num)
			rra(a);
	}
}

void	a_exept_3(t_list **a, t_list **b, int size)
{
	int		i;
	int		median;
	int		pushed;
	int		rotated;

	i = 0;
	pushed = 0;
	rotated = 0;
	if (size <= 3)
	{
		sort_small(a, size);
		return ;
	}
	median = get_median(a, size);
	while (i < size)
	{
		if ((*a)->num < median)
		{
			pb(b, a);
			pushed++;
		}
		else
		{
			ra(a);
			rotated++;
		}
		i++;
	}
	while(rotated--)
		rra(a);
	a_exept_3(a, b, size - pushed);
}

void	to_a(t_list **a, t_list **b, int size_b)
{
	int		max_index;
	int		max_num;
	int		i;
	t_list	*temp;

	while (*b)
	{
		temp = *b;
		max_index = 0;
		max_num = temp->num;
		i = 0;
		while(temp->next)
		{
			if (max_num < temp->next->num)
			{
				max_index = i + 1;

				max_num = temp->next->num;
			}
			temp = temp->next;
			i++;
		}
		if (max_index <= size_b / 2)
			while (max_index--)
				rb(b);
		else
		{
			max_index = size_b - max_index;
			while (max_index--)
				rrb(b);
		}
		pa(a, b);
		size_b--;
	}
}

void	quick_sort(t_list **a, t_list **b, int size)
{
	if (size <= 3)
	{
		sort_small(a, size);
		return ;
	}
	a_exept_3(a, b, size);
	to_a(a, b, size - 3);
}
