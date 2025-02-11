/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcer2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 09:48:44 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/11 09:48:47 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_error(char **str)
{
	int	i;
	int	j;
	int	y;
	int	*arr;

	arr = 0;
	i = 0;
	j = 0;
	while (str)
	{
		arr[i] = ft_atoi(str[i]);
		i++;
	}
	i--;
	while (j <= i)
	{
		while (y <= i)
		{
			y = 0;
			if (arr[j] == arr[y])
				return (1);
			y++;
		}
		j++;
	}
	return (0);
}

int	check_empty(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		if (av[i][0] == '\0')
		{
			write(2, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}
