/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 09:45:07 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/11 09:45:10 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*ft_join(char **str)
{
	char	*strj;
	int		i;

	i = 1;
	strj = NULL;
	while (str[i])
	{
		strj = ft_strjoin(strj, " ");
		strj = ft_strjoin(strj, str[i]);
		i++;
	}
	return (strj);
}

char	**spliter(char *str)
{
	char	**strj;

	strj = NULL;
	if (!str)
		return (NULL);
	strj = ft_split(str, ' ');
	return (strj);
}

int	check_char(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i][0] == '-')
		{
			j = 1;
			while(str[i][j] != '\0')
			{
				if (!ft_isdigit(str[i][j]))
					return (write(2, "Error\n", 6));
				j++;
			}
		}
		else
		{
			j = 0;
			while(str[i][j] != '\0')
			{
				if (!ft_isdigit(str[i][j]))
					return (write(2, "Error\n", 6));
				j++;
			}
		}
		i++;
	}
	return (0);
}
