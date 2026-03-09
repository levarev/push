/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:03:45 by lyov              #+#    #+#             */
/*   Updated: 2026/03/09 18:52:36 by larevsha         ###   ########.fr       */
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
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));

#endif