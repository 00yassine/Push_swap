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
	checker_linux(str1);
	ft_free_char(str1);
	return (0);
}

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

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	while (s1[i] != '\0')
		i++;
	s2 = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (!s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
