/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 09:42:28 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/11 09:42:34 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>

typedef struct stack
{
	int				nbr;
	struct stack	*next;
}	t_stack;
int		main(int ac, char **av);
void	ft_swap(t_stack **stack);
void	ft_rotate(t_stack **stack);
void	ft_push(t_stack **dest, t_stack **src);
void	ft_rev_rotate(t_stack **stack);
void	sort_2(t_stack **stack);
char	*ft_join(char **str);
char	**spliter(char *str);
int		ft_check_error(char **str);
int		check_char(char *str);
int		check_empty(int ac, char **av);
#endif