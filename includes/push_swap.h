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
int		is_num(char **str, int i, int j);
void	ft_error(void);
void	checkspace(char **str);
t_stack	*ft_lstnew(int nbr);
void	ft_push_swap(char **str);
int		check_double(char **str);
int		stack_creator(t_stack **a, char **str);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
int		ft_atoi(const char *str);
void	sort_2(t_stack **a);
void	stack_sorter(t_stack **a, int size);
#endif
