/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:33:09 by larevsha          #+#    #+#             */
/*   Updated: 2026/03/20 17:50:35 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*b;

	if (!lst)
		return (NULL);
	b = lst;
	while (b->next)
		b = b->next;
	return (b);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

void	rrb(t_list **b, t_oper *oper)
{
	t_list	*last;
	t_list	*prev;

	(oper->rrb)++;
	if (!b || !*b || !(*b)->next)
		return ;
	write(1, "rrb\n", 4);
	prev = *b;
	last = ft_lstlast(*b);
	while ((prev->next)->next != NULL)
		prev = prev->next;
	prev->next = NULL;
	last->next = *b;
	*b = last;
}

//int	main(void)
//{
//	t_list	*one = malloc(sizeof(t_list));
//	t_list	*two = malloc(sizeof(t_list));
//	t_list	*three = malloc(sizeof(t_list));
//	t_list	*temp1;
//	t_list	*temp2;
//	t_list	**head;

//	one->num = 5;
//	one->next = two;
//	two->num = 10;
//	two->next = three;
//	three->num = 15;
//	three->next = NULL;
//	head = &one;
//	temp1 = *head;
//	printf("minchev tpel\n");
//	while(temp1 != NULL)
//	{
//	}
//	ra(head);
//}