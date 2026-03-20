/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:03:45 by lyov              #+#    #+#             */
/*   Updated: 2026/03/20 22:01:14 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdbool.h>

typedef struct	s_list
{
	int				num;
	int				index;
	struct s_list	*next;
}	t_list;
typedef struct	s_oper
{
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
}	t_oper;
typedef struct	s_bench
{
	int	simple;
	int	medium;
	int	complex;
	int	adaptive;
	int	bench;
}	t_bench;
int		ft_atoi(const char *a);
size_t	ft_strlen(const char *s);
void	simple(char **argv, int **arr, int *size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*fill(char **argv);
char	*ft_strdup(char *s);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	pb(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	swap(int *a, int *b);
void	indexavorel (t_list **a);
void	radix(t_list **a, t_list **b);

#endif