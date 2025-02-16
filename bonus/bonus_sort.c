/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 03:58:43 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/16 03:59:00 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	checker_linux(char **str)
{
	t_stack	*a;
	t_stack	*b;
	int		size;

	size = 0;
	a = NULL;
	b = NULL;
	check_double(str);
	max_min(str);
	size = stack_creator(&a, str);
	if (size <= 0)
		ft_error(str);
	ft_ok_ko(&a, &b);
	ft_free_stack(&a);
}

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

void	ft_ok_ko(t_stack **a, t_stack **b)
{
	if (check_command(a, b) == 0)
	{
		if (check_if_sort(*a) == 0 && *b == NULL)
			write(1, "OK\n", 3);
		else
			write (1, "KO\n", 3);
	}
}

static int	ft_return(void)
{
	write(1, "Error\n", 6);
	return (1);
}

int	execute_command(t_stack **a, t_stack **b, char *cmd)
{
	if (ft_strncmp(cmd, "sa\n", ft_strlen(cmd)) == 0)
		ft_swap(a);
	else if (ft_strncmp(cmd, "sb\n", ft_strlen(cmd)) == 0)
		ft_swap(b);
	else if (ft_strncmp(cmd, "ss\n", ft_strlen(cmd)) == 0)
		ft_ss(a, b);
	else if (ft_strncmp(cmd, "pa\n", ft_strlen(cmd)) == 0)
		ft_push(b, a);
	else if (ft_strncmp(cmd, "pb\n", ft_strlen(cmd)) == 0)
		ft_push(a, b);
	else if (ft_strncmp(cmd, "ra\n", ft_strlen(cmd)) == 0)
		ft_rotate(a);
	else if (ft_strncmp(cmd, "rb\n", ft_strlen(cmd)) == 0)
		ft_rotate(b);
	else if (ft_strncmp(cmd, "rr\n", ft_strlen(cmd)) == 0)
		ft_rr(a, b);
	else if (ft_strncmp(cmd, "rra\n", ft_strlen(cmd)) == 0)
		ft_rev_rotate(a);
	else if (ft_strncmp(cmd, "rrb\n", ft_strlen(cmd)) == 0)
		ft_rev_rotate(b);
	else if (ft_strncmp(cmd, "rrr\n", ft_strlen(cmd)) == 0)
		ft_rrr(a, b);
	else
		ft_return();
	return (0);
}
