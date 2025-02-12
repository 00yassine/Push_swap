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
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct stack
{
	int				nbr;
	struct stack	*next;
}	t_stack;
typedef struct split
{
	int		word_c;
	char	**result;
	int		word_i;
	int		start;
	int		end;
	int		i;
}	t_split;
int		main(int ac, char **av);
void	ft_swap(t_stack **stack);
void	ft_rotate(t_stack **stack);
void	ft_push(t_stack **dest, t_stack **src);
void	ft_rev_rotate(t_stack **stack);
void	sort_2(t_stack **stack);
char	*ft_join(char **str);
char	**spliter(char *str);
int		ft_check_error(char **str);
int		check_char(char **str);
int		check_empty(int ac, char **av);
char	**ft_split(char const *s, char c);
int		ft_isdigit(int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
#endif
