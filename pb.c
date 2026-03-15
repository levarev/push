/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 16:16:23 by larevsha          #+#    #+#             */
/*   Updated: 2026/03/15 16:19:51 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

void	pb(t_list **b, t_list **a)
{
	t_list	*temp;

	if (!b || !a || !*a)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = NULL;
	ft_lstadd_front(b, temp);
}
