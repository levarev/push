/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyov <lyov@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:30:21 by larevsha          #+#    #+#             */
/*   Updated: 2026/03/19 01:27:41 by lyov             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;

	if (!*lst || !lst)
		return ;
	a = *lst;
	while (*lst)
	{
		a = (*lst)->next;
		del((*lst)->num);
		free(*lst);
		*lst = a;
	}
}

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*a;

	i = 0;
	a = lst;
	while (a)
	{
		i++;
		a = (*a).next;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*a;

	if (!lst)
		return (NULL);
	a = lst;
	while (a->next)
		a = a->next;
	return (a);
}

void	swap(int *a, int *b)
{
	int	temp;
	temp = *a;
	*a = *b;
	*b = temp;
}