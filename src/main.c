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
	if (ac == 1)
		return (0);
	if ((ac == 2 && av[1][0] == '\0') || av[1][0] == '\0')
		return (write (2, "Error\n", 6));
	str = ft_join(av);
	printf("%s\n",str);
	av = spliter(str);
	// if (double_checker(str) == 1 || create_stack() == 1)
	// {
	// 	freer(&a, &str, &av);
	// 	return (1);
	// }
	// ft_sorter(&a, &b);
	// freer(&a, &str, &av);
	int	i = 0;
	while(av[i])
	{
		printf("%s\n",av[i]);
		i++;
	}
	return (0);
}
