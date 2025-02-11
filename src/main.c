/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 09:44:28 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/11 09:44:38 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	char	*str;
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	str = NULL;
	if (ac < 2)
		return (1);
	if (check_empty(ac, av) == 1)
		return (1);
	str = ft_join(av);
	if (check_char(str) == 1)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	av = spliter(str);
	if (ft_check_error(av) == 1)
	{
		write (1, "Error\n", 6);
		return (0);
	}
}
