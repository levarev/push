/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:18:05 by lyov              #+#    #+#             */
/*   Updated: 2026/03/15 19:33:24 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	sortb(t_list **a, t_list **b)
{
	t_list	*temp;
	int		max;
	int		i;

	while (*b)
	{
		i = 0;
		max = (*b)->num;
		temp = *b;
		while (temp)
		{
			if (temp->num > max)
				max = temp->num;
			temp = temp->next;
		}
		temp = *b;
		while (max != temp->num && i++)
			temp = temp->next;
		if (i <= ft_lstsize(*b) / 2)
			while (max != (*b)->num)
			{
				rb(b);
				write (1, "rb\n", 3);
			}
		else
			while (max != (*b)->num)
			{
				rrb(b);
				write (1, "rrb\n", 4);
			}
		pa(a, b);
		write (1, "pa\n", 3);
	}
}

void	chunk(t_list **a, t_list **b, int size)
{
	t_list	**temp1;
	t_list	*temp2;
	int		*arr;
	int		*copy;
	int		i;
	int		j;
	int		temp;
	int		index;
	int		sqrt;
	int		chunk_start;
	int		chunk_end;

	i = 0;
	sqrt = 0;
	temp1 = a;
	temp2 = *a;
	index = 0;
	arr = malloc(sizeof(int) * size);
	copy = malloc(sizeof(int) * size);
	while (temp1)
	{
		arr[i] = (*temp1)->num;
		copy[i] = (*temp1)->num;
		i++;
		temp = (*temp1)->next;
	}
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (copy[j] > copy[j + 1])
			{
				temp = copy[j + 1];
				copy[j + 1] = copy[j];
				copy[j] = temp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (copy[j] == arr[i])
			{
				arr[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (temp2)
	{
		temp2->num = arr[i];
		temp2 = temp2->next;
		i++;
	}
	free (arr);
	free (copy);
	while (sqrt * sqrt < size)
		sqrt++;
	chunk_start = 0;
	chunk_end = sqrt - 1;
	while (chunk_start < size)
	{
		i = chunk_end - chunk_start + 1;
		while (i > 0 && *a)
		{
			if ((*a)->num >= chunk_start && (*a)->num <= chunk_end)
			{
				pb(b, a);
				i--;
			}
			else
				ra(a);
		}
		chunk_start = chunk_end + 1;
		chunk_end = chunk_start + sqrt - 1;
		if (chunk_end >= size)
			chunk_end = size - 1;
	}
	sortb(a, b);
}
