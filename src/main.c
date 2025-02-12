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
	int		i;

	i = 0;
	a = NULL;
	b = NULL;
	str = NULL;
	if (ac == 1)
		return (0);
	while (av[i] != 0)
	{
		if (av[i][0] == '\0')
			return (write (2, "Error\n", 6));
		i++;
	}
	if ((ac == 2 && av[1][0] == '\0'))
		return (write (2, "Error\n", 6));
	str = ft_join(av);
	av = spliter(str);
	check_char(av);
	return (0);
}
