/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 22:48:34 by yassine           #+#    #+#             */
/*   Updated: 2024/12/20 01:30:56 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char*s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

char	*ft_strjoin(const char *s1, const char *s2)
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

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*t;

	t = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		t[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if (size == 0 || count == 0)
		return (malloc(0));
	if (size != 0 && (count > SIZE_MAX / size))
		return (NULL);
	ptr = (char *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
