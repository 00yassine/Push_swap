NAME = push_swap
source = src/main.c src/operations.c src/parser.c src/sorting_utils.c src/utils.c helper/helper.c \
		helper/helper2.c src/sorter.c src/utils2.c src/sorter2.c src/sorter3.c src/free.c
src_bonus = bonus/get_next_line.c bonus/get_next_line_utils.c
objectf = $(source:%.c=%.o)
bonus = $(src_bonus:%.c=%.o)
CFLAGS = -Wall -Wextra -Werror -g3
HEADER = includes/push_swap.h

all:$(NAME)

$(NAME): $(objectf) $(bonus)
	cc $(CFLAGS) $(objectf) $(bonus) -o $(NAME)

%.o : %.c $(HEADER)
	cc $(CFLAGS) -c $< -o $@


clean:
	rm -rf $(objectf) $(bonus)

fclean: clean
	rm -rf $(NAME) 

re: fclean all

.PHONY: all clean fclean re
