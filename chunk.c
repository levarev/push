/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyov <lyov@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:18:05 by lyov              #+#    #+#             */
/*   Updated: 2026/03/14 18:28:21 by lyov             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	chunk(t_list *a, t_list *b, int size)
{
	t_list	*temp;
	int		*arr;
	int		*copy;
	int		i;
	int		j;
	int		temp;
	int		index;

	i = 0;
	temp = a;
	index = 0;
	arr = malloc(sizeof(int) * size);
	copy = malloc(sizeof(int) * size);
	while (temp)
	{
		arr[i] = temp->num;
		copy[i] = temp->num;
		i++;
		temp = temp->next;
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
	while (a)
	{
		a->num = arr[i];
		a = a->next;
	}
	free (arr);
	free (copy);
}