/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 03:20:13 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/16 03:20:15 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	stack_creator(t_stack **a, char **str)
{
	int		i;
	t_stack	*next;

	next = NULL;
	i = 0;
	while (str[i])
	{
		next = malloc(sizeof(t_stack));
		if (!next)
			return (-1);
		next->nbr = ft_atoi(str[i]);
		next->next = NULL;
		ft_lstadd_back(a, next);
		i++;
	}
	return (i);
}

void	ft_error(char **str)
{
	write(2, "Error\n", 6);
	ft_free_char(str);
	exit(1);
}

