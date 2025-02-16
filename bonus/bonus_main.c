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

#include "checker.h"

int	main(int ac, char **av)
{
	char	*str;
	char	**str1;

	str = NULL;
	if (ac == 1)
		return (0);
	checkspace(av);
	if ((ac == 2 && av[1][0] == '\0'))
		return (1);
	str = ft_join(av);
	str1 = spliter(str);
	free(str);
	check_char(str1);
	ft_push_swap(str1);
	ft_free_char(str1);
	return (0);
}

void	check_empty2(char **av)
{
	int	i;

	i = 0;
	while (av[i] != 0)
	{
		if (av[i][0] == '\0')
			ft_error(av);
		i++;
	}
}
