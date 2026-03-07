/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:03:45 by lyov              #+#    #+#             */
/*   Updated: 2026/03/07 19:21:29 by larevsha         ###   ########.fr       */
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

#endif