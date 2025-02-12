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

int	check_char(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]) == 1)
			return (1);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			if (str[i] >= 48 && str[i] <= 57)
				return (1);
		}
	}
	i = 0;
	while (str)

	return (0);
}
