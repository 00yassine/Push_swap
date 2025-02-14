/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:12:01 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/14 16:12:05 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	bubble_sort(int size, int *sort)
{
	int (i), (tmp), (j);
	i = 0;
	tmp = 0;
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
}

int	*ft_arr_sort(t_stack *a, int size)
{
	int		*sort;
	t_stack	*temp;
	int		i;

	temp = a;
	i = 0;
	sort = malloc(sizeof(int) * size);
	if (!sort)
		return (NULL);
	while (i < size)
	{
		sort[i] = temp->nbr;
		i++;
		temp = temp->next;
	}
	bubble_sort(size, sort);
	return (sort);
}

int	calculate_end(int size)
{
	if (size <= 16)
		return (3);
	else if (size <= 100)
		return (16);
	else if (size <= 500)
		return (35);
	else
		return (50);
}

void	
