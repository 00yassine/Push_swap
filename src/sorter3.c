/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:49:32 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/15 11:49:34 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_a(t_stack **a, t_stack **b)
{
	check_and_move_big_to_tp(b);
	ft_push(a, b);
	write(1, "pa\n", 3);
}

void	check_and_move_big_to_tp(t_stack **b)
{
	int	i;
	int	size;

	size = ft_lstsize(*b);
	i = bigger_num_i(b);
	if (i == 1)
		return ;
	else
		move_big_to_top_b(b, i, size);
}

void	move_big_to_top_b(t_stack **b, int i, int size)
{
	int	j;

	j = 0;
	if (i <= size / 2)
	{
		while (j < i - 1)
		{
			ft_rotate(b);
			write(1, "rb\n", 3);
			j++;
		}
	}
	else if (i > size / 2)
	{
		i = size - i + 1;
		while (j < i)
		{
			ft_rev_rotate(b);
			write(1, "rrb\n", 4);
			j++;
		}
	}
}
