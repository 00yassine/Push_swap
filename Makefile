NAME = push_swap
source = src/main.c src/operations.c src/parser.c src/sorting_utils.c src/utils.c helper/helper.c \
		helper/helper2.c src/sorter.c src/utils2.c src/sorter2.c
objectf = $(source:%.c=%.o)
CFLAGS = -Wall -Wextra -Werror
HEADER = includes/push_swap.h

all:$(NAME)

$(NAME): $(objectf)
	cc $(CFLAGS) $(objectf) -o $(NAME)

%.o : %.c $(HEADER)
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(objectf)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
