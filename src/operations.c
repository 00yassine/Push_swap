/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 09:44:51 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/11 09:44:55 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void	ft_swap(t_stack **stack)
// {
// 	t_node	*first;
// 	t_node	*second;

// 	if (!stack || !(*stack) || !(*stack)->next)
// 		return ;
// 	first = *stack;
// 	second = first->next;
// 	first->next = second->next;
// 	second->next = first;
// 	*stack = second;
// }

// void	ft_rotate(t_stack **stack)
// {
// 	t_node	*first;
// 	t_node	*last;

// 	if (!stack || !(*stack) || !(*stack)->next)
// 		return ;
// 	last = *stack;
// 	first = *stack;
// 	while (last->next)
// 		last = last->next;
// 	*stack = first->next;
// 	first->next = NULL;
// 	last->next = first;
// }

// void	ft_rev_rotate(t_stack **stack)
// {
// 	t_node	*second_last;
// 	t_node	*last;

// 	if (!stack || !(*stack) || !(*stack)->next)
// 		return ;
// 	second_last = NULL;
// 	last = *stack;
// 	while (last->next)
// 	{
// 		second_last = last;
// 		last = last->next;
// 	}
// 	if (!second_last)
// 		return ;
// 	second_last->next = NULL;
// 	last->next = *stack;
// 	*stack = last;
// }

// void	ft_push(t_stack **dest, t_stack **src)
// {
// 	t_stack	*top;

// 	if (!src || !(*src))
// 		return ;
// 	top = *src;
// 	*src = top->next;
// 	top->next = *dest;
// 	*dest = top;
// }
