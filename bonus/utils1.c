/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 02:58:31 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/16 02:58:33 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_free_char(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		free (av[i]);
		i++;
	}
	free(av);
}

void	ft_free_stack(t_stack **a)
{
	t_stack	*tmp;

	while (*a)
	{
		tmp = (*a)->next;
		free (*a);
		*a = tmp;
	}
	*a = NULL;
}

void	check_char(char **str)
{
	int (i), (j);
	i = 0;
	while (str[i] != 0)
	{
		if ((str[i][0] == '-' || str[i][0] == '+')
			&& (str[i][1] >= '0' && str[i][1] <= '9'))
		{
			j = 1;
			is_num(str, i, j);
		}
		else if (str[i][0] != '-' || str[i][0] != '+')
		{
			j = 0;
			is_num(str, i, j);
		}
		else if (str[i][0] == '-' || str[i][0] == '+')
			ft_error(str);
		i++;
	}
	return ;
}

void	check_double(char **str)
{
	int (i), (j);
	i = 0;
	if (!str[0])
		return ;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				ft_error(str);
			j++;
		}
		i++;
	}
	return ;
}

void	max_min(char **str)
{
	int		i;
	long	num;

	i = 0;
	while (str[i])
	{
		num = ft_atol(str[i]);
		if (num > 2147483647 || num < -2147483648)
			ft_error(str);
		i++;
	}
	return ;
}
