/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 01:09:58 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/16 01:10:01 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdint.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

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
void		check_char(char **str);
int		check_empty(int ac, char **av);
char	**ft_split(char const *s, char c);
int		ft_isdigit(int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
int		is_num(char **str, int i, int j);
void	ft_error(char **str);
void	checkspace(char **str);
t_stack	*ft_lstnew(int nbr);
void	ft_push_swap(char **str);
void	check_double(char **str);
int		stack_creator(t_stack **a, char **str);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
int		ft_atoi(const char *str);
void	sort_2(t_stack **a);
void	stack_sorter(t_stack **a, t_stack **b, int size);
void	max_min(char **str);
long	ft_atol(const char *str);
int		check_if_sort(t_stack *a);
int		bigger_num_i(t_stack **a);
void	sort_3(t_stack **a);
void	sort_4(t_stack **a, t_stack **b);
int		ft_lstsize(t_stack *lst);
void	sort_5(t_stack **a, t_stack **b);
void	sort_bigger_than_5(t_stack **a, t_stack **b);
void	bubble_sort(int size, int *sort);
int		*ft_arr_sort(t_stack *a, int size);
void	almost_sorted_b(t_stack **a, t_stack **b, int *sort, int size);
int		calculate_end(int size);
void	push_for_start(t_stack **a, t_stack **b, int *start, int *end);
void	push_for_end(t_stack **a, t_stack **b, int *start, int *end);
void	sort_a(t_stack **a, t_stack **b);
void	check_and_move_big_to_tp(t_stack **b);
void	move_big_to_top_b(t_stack **b, int i, int size);
void	move_big_to_top_a(t_stack **a, int i, int size);
void	check_empty2(char **av);
void	ft_lstclear(t_stack **lst);
void	ft_free_char(char **av);
void	ft_free_stack(t_stack **a);
#endif
