NAME = push_swap
# NAMEBONUS = so_long_bonus
CFLAGS = -Wextra -Wall -Werror -Wunreachable-code -Ofast
LIBFT = -L./libft -lft

SRCS =	src/main.c src/input_check.c src/delete.c src/tools.c src/ft_long_atoi.c \
		src/init.c src/push_swap.c src/rule/rule_swap.c src/lst/lst_add_back.c \
		src/lst/lst_clear.c src/lst/lst_new.c src/lst/lst_last.c src/rule/rule_push.c \
		src/rule/rule_rotate.c src/rule/rule_rrotate.c src/sort.c src/lst/lst_size.c \
		src/rotate_check.c src/stack_check.c

OBJS = $(SRCS:.c=.o)

# BONUS_SRCS =	
# BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	@cc $(CFLAGS) -o $@ -c $< && printf "Compiling: $(notdir $<)\n"

# bonus: $(NAMEBONUS)

$(NAME): $(OBJS)
	@$(MAKE) -C ./libft
	@cc $(OBJS) $(LIBFT) -o $(NAME)

# $(NAMEBONUS): $(BONUS_OBJS)
# 	@$(MAKE) -C ./libft
# 	@cc $(BONUS_OBJS) $(LIBFT) -o $(NAMEBONUS) -Ofast

clean:
	@rm -rf $(OBJS) $(BONUS_OBJS)
	@$(MAKE) -C ./libft clean

fclean: clean
	@rm -rf $(NAME)
	@$(MAKE) -C ./libft fclean

re: clean all

.PHONY: all clean fclean re
