/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 09:45:29 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/11 09:45:31 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_swap(char **str)
{
	t_stack	*a;
	t_stack	*b;
	int		size;

	size = 0;
	a = NULL;
	b = NULL;
	if (check_double(str) == 1)
		ft_error();
	size = stack_creator(&a, str);
	if (size <= 0)
		ft_error();
	stack_sorter(&a, size);
}

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

int	check_double(char **str)
{
	int (i), (j);
	i = 0;
	if (!str[0])
		return (0);
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	stack_sorter(t_stack **a, int size)
{
	if (size == 2)
		sort_2(a);
}
