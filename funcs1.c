/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:03:16 by lyov              #+#    #+#             */
/*   Updated: 2026/03/09 18:52:07 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

// int	ft_atoi(const char *a)
// {
// 	int	i;
// 	int	n;
// 	int	d;

// 	n = 0;
// 	i = 0;
// 	d = 1;
// 	while ((a[i] >= 9 && a[i] <= 13) || a[i] == 32)
// 		i++;
// 	if (a[i] == '-' || a[i] == '+')
// 	{
// 		if (a[i] == '-')
// 			d = d * -1;
// 		i++;
// 	}
// 	while (a[i] >= 48 && a[i] <= 57)
// 	{
// 		n = 10 * n + a[i] - 48;
// 		i++;
// 	}
// 	return (n * d);
// }

size_t	ft_strlen(const char *s)
{
	const char	*p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	size_t	i;
	size_t	t;

	t = 0;
	i = 0;
	a = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!a)
		return (NULL);
	while (i < ft_strlen(s1) && s1[i] != '\0')
	{
		a[i] = s1[i];
		i++;
	}
	while (t < ft_strlen(s2) && s2[t] != '\0')
	{
		a[i] = s2[t];
		i++;
		t++;
	}
	a[i] = '\0';
	return (a);
}

char	*ft_strdup(char *s)
{
	size_t	i;
	char	*a;

	i = 0;
	while (s[i] != '\0')
		i++;
	a = malloc(i + 1);
	i = 0;
	if (a == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		a[i] = s[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

t_list	*ft_lstnew(void *num)
{
	t_list	*a;

	a = malloc(sizeof(t_list));
	if (!a)
		return (NULL);
	(*a).num = num;
	(*a).next = NULL;
	return (a);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
