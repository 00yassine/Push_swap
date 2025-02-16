/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_function.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 00:49:53 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/16 00:49:56 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int	check_if_sort(t_stack *a)
{
	if (a == NULL)
		return (1);
	while (a->next)
	{
		if (a->nbr > a->next->nbr)
			return (1);
		a = a->next;
	}
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
