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

#include "checker.h"

char	*ft_join(char **str)
{
	char	*strj;
	char	*strj_helper;
	int		i;

	i = 1;
	strj = ft_strdup(str[i]);
	while (str[++i])
	{
		strj_helper = ft_strjoin(strj, " ");
		free(strj);
		strj = ft_strjoin(strj_helper, str[i]);
		free(strj_helper);
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

void	check_char(char **str)
{
	int (i), (j);
	i = 0;
	while (str[i] != 0)
	{
		if ((str[i][0] == '-' || str[i][0] == '+')
			&& (str[i][1] >= '0' && str[i][1] <= '9'))
		{
			j = 1;
			is_num(str, i, j);
		}
		else if (str[i][0] != '-' || str[i][0] != '+')
		{
			j = 0;
			is_num(str, i, j);
		}
		else if (str[i][0] == '-' || str[i][0] == '+')
			ft_error(str);
		i++;
	}
	return ;
}

int	is_num(char **str, int i, int j)
{
	while (str[i][j] != '\0')
	{
		if (!ft_isdigit(str[i][j]))
			ft_error(str);
		j++;
	}
	return (0);
}

void	checkspace(char **str)
{
	int (only_spaces), (i), (j);
	if (!str)
		return ;
	i = 0;
	while (str[i])
	{
		j = 0;
		only_spaces = 1;
		while (str[i][j])
		{
			if (str[i][j] != ' ')
			{
				only_spaces = 0;
				break ;
			}
			j++;
		}
		if (only_spaces)
		{
			ft_error(str);
			return ;
		}
		i++;
	}
}
