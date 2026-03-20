/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyov <lyov@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:18:05 by lyov              #+#    #+#             */
/*   Updated: 2026/03/20 02:05:18 by lyov             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortb(t_list **a, t_list **b)
{
	t_list	*temp;
	int		max;
	t_list	*index;
	int		i;

	while (*b)
	{
		i = 0;
		index = *b;
		max = (*b)->num;
		temp = *b;
		while (temp)
		{
			if (temp->num > max)
			{
				max = temp->num;
				index = temp;
			}
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
	t_list	*temp1;
	int		*arr;
	int		*copy;
	int		i;
	int		j;
	int		temp;
	int		sqrt;
	int		chunk_start;
	int		chunk_end;

	i = 0;
	sqrt = 0;
	temp1 = *a;
	arr = malloc(sizeof(int) * size);
	copy = malloc(sizeof(int) * size);
	if (!arr || !copy)
		return ;
	while (temp1)
	{
		arr[i] = temp1->num;
		copy[i] = temp1->num;
		i++;
		temp1 = temp1->next;
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
	temp1 = *a;
	while (temp1)
	{
		temp1->num = arr[i];
		temp1 = temp1->next;
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
				pb(a, b);
				write(1, "pb\n", 3);
				i--;
			}
			else
			{
				ra(a);
				write(1, "ra\n", 3);
			}
		}
		chunk_start = chunk_end + 1;
		chunk_end = chunk_start + sqrt - 1;
		if (chunk_end >= size)
			chunk_end = size - 1;
	}
	sortb(a, b);
}
