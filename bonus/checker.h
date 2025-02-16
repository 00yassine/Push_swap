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
#  define BUFFER_SIZE 5
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
void	checker_linux(char **str);
int		check_if_sort(t_stack *a);
char	*ft_strdup(const char *s1);
char	**ft_split(char const *s, char c);
void	check_char(char **str);
void	ft_free_char(char **av);
void	ft_ok_ko(t_stack **a, t_stack **b, char **str);
int		check_command(t_stack **a, t_stack **b, char **str);
int		execute_command(t_stack **a, t_stack **b, char *cmd, char **str);
int		ft_strlen(const char *s);
char	*ft_strchr(const char*s, int c);
char	*ft_strjoin(const char *s1, const char *s2);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_joinfree(char *buffer, char *buff);
char	*ft_get_line(char *buffer);
char	*ft_get_next(char *buffer);
char	*read_file(int fd, char *buffer);
char	*get_next_line(int fd);
void	ft_swap(t_stack **stack);
void	ft_rotate(t_stack **stack);
void	ft_rev_rotate(t_stack **stack);
void	ft_push(t_stack **dest, t_stack **src);
void	checkspace(char **str);
int		ft_lstsize(t_stack *lst);
char	*ft_join(char **str);
char	**spliter(char *str);
void	ft_ss(t_stack **a, t_stack **b);
void	ft_rr(t_stack **a, t_stack **b);
void	ft_rrr(t_stack **a, t_stack **b);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_free_stack(t_stack **a);
void	check_double(char **str);
void	max_min(char **str);
int		stack_creator(t_stack **a, char **str);
void	ft_error(char **str);
int		ft_atoi(const char *str);
long	ft_atol(const char *str);
int		is_num(char **str, int i, int j);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_isdigit(int c);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
#endif
