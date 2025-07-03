NAME		= push_swap
BONUS		= checker

CC			= cc
CFLAGS		= -Wall -Wextra -Werror

LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

SRC			= src/utils.c src/cleaning.c src/checking_and_creating.c src/push_operands.c src/swap_operands.c src/rotate_operands.c \
			src/reverse_rotate_operands.c sorting/sorting.c sorting/sort_till_five.c sorting/min_utils.c sorting/helper_functions.c main.c

OBJ	= $(SRC:.c=.o)

BONUS_SRC	= bonus/checker.c bonus/src/checking_and_creating_bonus.c bonus/src/utils_bonus.c \
			bonus/src/cleaning_bonus.c bonus/src/push_operands_bonus.c bonus/src/swap_operands_bonus.c \
			bonus/src/rotate_operands_bonus.c bonus/src/reverse_rotate_operands_bonus.c \
			bonus/gnl/get_next_line_bonus.c bonus/gnl/get_next_line_utils_bonus.c

BONUS_OBJ	= $(BONUS_SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIBFT)

bonus: $(BONUS)

$(BONUS): $(BONUS_OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $(BONUS_OBJ) $(LIBFT)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -f $(NAME) $(BONUS)

re: fclean all

.PHONY: all clean fclean re bonus