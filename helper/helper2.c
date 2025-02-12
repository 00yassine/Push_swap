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

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;
	unsigned int	n;

	i = 0;
	if (!s)
		return (NULL);
	n = ft_strlen(s);
	if (n <= start)
		return (ft_strdup(""));
	if (n - start < len)
		len = n - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
