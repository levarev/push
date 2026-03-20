/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyov <lyov@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 01:38:29 by lyov              #+#    #+#             */
/*   Updated: 2026/03/20 02:43:10 by lyov             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void indexavorel(t_list **a)
{
	t_list *tmp1;
	t_list *tmp2;
	int  val;
	int  count;

	tmp1 = *a;
	while (tmp1)
	{
		tmp2 = *a;
		count = 0;
		val = tmp1->value;
		while (tmp2)
		{
			if (val < tmp2->value)
				count++;
		tmp2 = tmp2 -> next; 
		}
		tmp1 -> index = count;
		tmp1 = tmp1 ->next;
	}
}

// void	indexing(t_list **a, int size)
// {
// 	t_list	*temp1;
// 	int		*arr;
// 	int		*copy;
// 	int		i;
// 	int		j;
// 	int		temp;	

// 	arr = malloc(sizeof(int) * size);
// 	copy = malloc(sizeof(int) * size);
// 	if (!arr || !copy)
// 	{
// 		free(copy);
// 		free(arr);
// 		return ;
// 	}
// 	temp1 = *a;
// 	i = 0;
// 	while (temp1)
// 	{
// 		arr[i] = temp1->num;
// 		copy[i] = temp1->num;
// 		i++;
// 		temp1 = temp1->next;
// 	}
// 	i = 0;
// 	while (i < size - 1)
// 	{
// 		j = 0;
// 		while (j < size - 1 - i)
// 		{
// 			if (copy[j] > copy[j + 1])
// 			{
// 				temp = copy[j + 1];
// 				copy[j + 1] = copy[j];
// 				copy[j] = temp;
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	i = 0;
// 	while (i < size)
// 	{
// 		j = 0;
// 		while (j < size)
// 		{
// 			if (copy[j] == arr[i])
// 			{
// 				arr[i] = j;
// 				break ;
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	i = 0;
// 	temp1 = *a;
// 	while (temp1)
// 	{
// 		temp1->num = arr[i];
// 		temp1 = temp1->next;
// 		i++;
// 	}
// 	free (arr);
// 	free (copy);
// }