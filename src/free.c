/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:31:59 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/15 16:32:03 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
