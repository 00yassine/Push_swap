/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 00:55:24 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/16 00:55:28 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int ac, char **av)
{
	char	*str;
	char	**str1;

	str = NULL;
	if (ac == 1)
		return (0);
	checkspace(av);
	if ((ac == 2 && av[1][0] == '\0'))
		write(2, "Error\n", 6);
	str = ft_join(av);
	str1 = spliter(str);
	free(str);
	check_char(str1);
	ft_push_swap(str1);
	ft_free_char(str1);
	return (0);
}
