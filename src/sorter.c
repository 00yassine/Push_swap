/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:11:19 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/13 20:18:51 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	bigger_num_i(t_stack **a)
{
	t_stack	*tmp;
	int		temp;
	int		i;

	i = 0;
	tmp = *a;
	temp = tmp->nbr;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (temp < tmp->nbr)
			temp = tmp->nbr;
	}
	tmp = *a;
	while (tmp)
	{
		i++;
		if (temp == tmp->nbr)
			break ;
		tmp = tmp->next;
	}
	return (i);
}

void	sort_2(t_stack **a)
{
	if ((*a)->nbr > (*a)->next->nbr)
	{
		ft_swap (a);
		write(1, "sa\n", 3);
	}
}

void	sort_3(t_stack **a)
{
	int	i;

	if (check_if_sort(*a) == 1)
	{
		i = bigger_num_i(a);
		if (i == 1)
		{
			ft_rotate(a);
			write(1, "ra\n", 3);
		}
		if (i == 2)
		{
			ft_rev_rotate(a);
			write(1, "rra\n", 4);
		}
		if ((*a)->nbr > (*a)->next->nbr)
		{
			ft_swap(a);
			write(1, "sa\n", 3);
		}
	}
}

void	sort_4(t_stack **a, t_stack **b)
{
	int	i;

	i = bigger_num_i(a);
	move_big_to_top_a(a, i, ft_lstsize(*a));
	ft_push(b, a);
	write (1, "pb\n", 3);
	sort_3(a);
	ft_push(a, b);
	ft_rotate(a);
	write(1, "pa\nra\n", 6);
}

void	sort_5(t_stack **a, t_stack **b)
{
	int	i;

	i = bigger_num_i(a);
	move_big_to_top_a(a, i, ft_lstsize(*a));
	ft_push(b, a);
	write(1, "pb\n", 3);
	sort_4(a, b);
	ft_push(a, b);
	ft_rotate(a);
	write(1, "pa\nra\n", 6);
}
