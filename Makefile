NAME = push_swap
source = src/main.c src/operations.c src/parser.c src/sorting.c src/utils.c
objectf = $(source:src/%.c=src/%.o)
CFLAGS = -Wall -Wextra -Werror
HEADER = includes/push_swap.h
LIBFT = libft/libft.a

all:$(NAME)

$(NAME): $(objectf) $(LIBFT)
	cc $(CFLAGS) $(objectf) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C libft

src/%.o : src/%.c
	cc $(CFLAGS) -c $< -o $@ 

clean:
	rm -rf $(objectf)
	make clean -C libft

fclean: clean
	rm -rf $(NAME)
	make fclean -C libft

re: fclean all

.PHONY: all clean fclean re