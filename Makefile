NAME = push_swap
source = src/main.c src/operations.c src/parser.c src/sorting.c src/utils.c helper/helper.c helper/helper2.c
objectf = $(source:src/%.c=src/%.o)
CFLAGS = -Wall -Wextra -Werror
HEADER = includes/push_swap.h

all:$(NAME)

$(NAME): $(objectf)
	cc $(CFLAGS) $(objectf) -o $(NAME)

src/%.o : src/%.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(objectf)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
