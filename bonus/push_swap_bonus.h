/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 22:49:30 by ykabili-          #+#    #+#             */
/*   Updated: 2025/02/15 22:49:38 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdint.h>

typedef struct stack
{
	int				nbr;
	struct stack	*next;
}	t_stack;

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*read_file(int fd, char *text);
char	*ft_get_line(char *text);
char	*ft_get_next(char *text);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t count, size_t size);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

#endif
