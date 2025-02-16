/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 03:29:29 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/16 03:29:47 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = *lst;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

int	check_command(t_stack **a, t_stack **b)
{
	char	*cmd;

	cmd = NULL;
	while (1)
	{
		cmd = get_next_line(0);
		if (cmd == NULL)
			break ;
		if (execute_command(a, b, cmd) == 1)
		{
			free(cmd);
			return (1);
		}
		free(cmd);
	}
	return (0);
}
