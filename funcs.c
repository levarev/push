/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:03:16 by lyov              #+#    #+#             */
/*   Updated: 2026/03/07 19:18:00 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_atoi(const char *a)
{
	int	i;
	int	n;
	int	d;

	n = 0;
	i = 0;
	d = 1;
	while ((a[i] >= 9 && a[i] <= 13) || a[i] == 32)
		i++;
	if (a[i] == '-' || a[i] == '+')
	{
		if (a[i] == '-')
			d = d * -1;
		i++;
	}
	while (a[i] >= 48 && a[i] <= 57)
	{
		n = 10 * n + a[i] - 48;
		i++;
	}
	return (n * d);
}

size_t	ft_strlen(const char *s)
{
	const char	*p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}
