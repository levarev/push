/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_simple.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 00:27:58 by lyov              #+#    #+#             */
/*   Updated: 2026/03/07 20:48:50 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	simple(char **argv, int **arr, int *size)
{
	int		i;
	size_t	n;

	i = 0;
	while (argv[++i])
	{
		n = 0;
		if (argv[i][n] == '+' || argv[i][n] == '-')
		{
			n++;
			if (!argv[i][n])
				return ;
		}
		while (argv[i][n] >= '0' && argv[i][n] <= '9')
			n++;
		if (!(argv[i][n] >= '0' && argv[i][n] <= '9') && argv[i][n])
			return ;
		if (n == ft_strlen(argv[i]))
		{
			(*arr)[*size] = ft_atoi(argv[i]);
			(*size)++;
		}
		else
			exit(1);
	}
}

//int	main(int argc, char **argv)
//{
//	int	size;
//	int	*arr;
//	int	i;

//	i = 0;
//	size = 0;
//	arr = malloc(sizeof(int) * (argc - 1));
//	simple(argv, &arr, &size);
//	while (i < size)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	free (arr);
//	return (0);
//}
