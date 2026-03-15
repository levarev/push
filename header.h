/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:03:45 by lyov              #+#    #+#             */
/*   Updated: 2026/03/15 19:35:09 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct s_list
{
	int				num;
	struct s_list	*next;
}	t_list;
int		ft_atoi(const char *a);
size_t	ft_strlen(const char *s);
void	simple(char **argv, int **arr, int *size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*fill(char **argv);
char	*ft_strdup(char *s);
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	pb(t_list **b, t_list **a);
void	pa(t_list **a, t_list **b);
void	rra(t_list **a);

#endif