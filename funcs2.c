/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:30:21 by larevsha          #+#    #+#             */
/*   Updated: 2026/03/09 18:44:09 by larevsha         ###   ########.fr       */
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
