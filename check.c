/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyov <lyov@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 00:27:58 by lyov              #+#    #+#             */
/*   Updated: 2026/03/06 19:03:25 by lyov             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	simple(int argc, char **argv, int **arr, int *size)
{
	int	i;
	int	n;

	i = 1;
	while (argv[i])
	{
		n = 0;
		if (argv[i][n] == '+' || argv[i][n] == '-')
		{
			n++;
			if (!argv[i][n])
				return ;
		}
		while (argv[i][n] >= 48 && argv[i][n] <= 57)
			n++;
		if (n == ft_strlen(argv[i]))
		{
			*(arr)[*size] = ft_atoi(argv[i]);
			i++;
			*size++;
		}
		else
			return ;
	}
}

int	main(int argc, char **argv)
{
	int	size;
	int	*arr;
	int	i;

	i = 0;
	size = 0;
	arr = malloc(sizeof(int) * argc - 1);
	simple(argc, argv, &arr, &size);
	while (i <= size)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}