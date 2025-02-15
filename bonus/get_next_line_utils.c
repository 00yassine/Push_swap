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

#include "../includes/push_swap.h"

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
