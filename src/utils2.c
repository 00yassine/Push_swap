/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:02:49 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/13 20:19:08 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_if_sort(t_stack *a)
{
	if (a == NULL)
		return (1);
	while (a->next)
	{
		if (a->nbr > a->next->nbr)
			return (1);
		a = a->next;
	}
	return (0);
}

int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	move_big_to_top(t_stack **a, int i, int size)
{
	int	j;

	j = 0;
	if (i <= size / 2)
	{
		while (j < i - 1)
		{
			ft_rotate(a);
			write(1, "ra\n", 3);
			j++;
		}
	}
	else if (i > size / 2)
	{
		i = size - i + 1;
		while (j < i)
		{
			ft_rev_rotate(a);
			write(1, "rra\n", 4);
			j++;
		}
	}
}

void	sort_bigger_than_5(t_stack **a, t_stack **b)
{
	int	sort[];
	int	size;
	int	i;

	i = 0;
	size = ft_lstsize(*a);
	sort = ft_sort_sort(a, size);

}

int	*ft_sort_sort(t_stack *a, int size)
{
	int	*sort;
	int i j tmp;
	t_stack	*temp;

	temp =
	j = 0;
	i = 0;
	sort = malloc(sizeof(int) * size);
	if (so)
	while (i < size)
	{
		sort[i] = a->nbr;
		i++;
		a = a->next;
	}
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (sort[i] > sort[j])
			{
				tmp = sort[i];
				sort[i] = sort[j];
				sort[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (sort);
}
