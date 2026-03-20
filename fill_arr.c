/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larevsha <larevsha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 13:30:55 by lyov              #+#    #+#             */
/*   Updated: 2026/03/20 20:34:40 by larevsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	which_method(char **argv)
{
	int	num;
	int	i;
	
	i = 1;
	num = 0;
	if (*argv[1] == "--simple")
		num = 1;
	else if (*argv[1] == "--medium")
		num = 2;
	else if (*argv[1] == "--complex")
		num = 3;
	else if (*argv[1] == "--adaptive")
		num = 4;
	return (num);
}

char	*fill(char **argv)
{
	char	*arr;
	char	*temp;
	int		i;

	if (which_method(argv))
		i = 2;
	else
		i = 1;
	arr = ft_strdup("");
	while (argv[i])
	{
		temp = arr;
		arr = ft_strjoin(arr, argv[i]);
		free (temp);
		temp = arr;
		if (argv[i + 1])
		{
			arr = ft_strjoin(arr, " ");
			free (temp);
		}
		i++;
	}
	return (arr);
}

// int	main(int argc, char **argv)
// {
// 	printf("%s\n", fill(argv));
// }