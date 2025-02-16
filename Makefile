NAME = push_swap
source = src/main.c src/operations.c src/parser.c src/sorting_utils.c src/utils.c helper/helper.c \
		helper/helper2.c src/sorter.c src/utils2.c src/sorter2.c src/sorter3.c src/free.c
 bonusfile = bonus/get_next_line.c bonus/get_next_line_utils.c bonus/bonus_main.c bonus/bonus_sort.c \
		bonus/operations.c bonus/utils1.c bonus/split.c bonus/operations2.c bonus/utils2.c bonus/utils3.c
objectf = $(source:%.c=%.o)
bonus = $(bonusfile:%.c=%.o)
CFLAGS = -Wall -Wextra -Werror
HEADER = includes/push_swap.h
BONUSNAME = checker

all:$(NAME)

$(NAME): $(objectf)
	cc $(CFLAGS) $(objectf) -o $(NAME)

bonus:$(BONUSNAME)

$(BONUSNAME):$(bonus)
	cc $(CFLAGS) $(bonus) -o $(BONUSNAME)

%.o : %.c $(HEADER)
	cc $(CFLAGS) -c $< -o $@


clean:
	rm -rf $(objectf) $(bonus)

fclean: clean
	rm -rf $(NAME) $(BONUSNAME)

re: fclean all

.PHONY: all clean fclean re
