/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:48:19 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/12 11:48:21 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		lens1;
	int		lens2;

	lens1 = 0;
	lens2 = 0;
	if (s1)
		lens1 = ft_strlen(s1);
	if (s2)
		lens2 = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!result)
		return (NULL);
	lens1 = 0;
	lens2 = 0;
	while (s1 && s1[lens1] != '\0')
	{
		result[lens1] = s1[lens1];
		lens1++;
	}
	while (s2 && s2[lens2] != '\0')
		result[lens1++] = s2[lens2++];
	result[lens1] = '\0';
	return (result);
}
