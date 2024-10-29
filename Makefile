# **************************************************************************** #
#                                                                              #
#                                                     _.._  .           .      #
#    Makefile                                       .' .-'`        *           #
#                                                  /  /       +        *       #
#    By: ldel-val <ldel-val@student.42madrid.c     |  |           *            #
#                                                  \  '.___.;       +          #
#    Created: 2024/10/28 20:24:50 by ldel-val       '._  _.'   .        .      #
#    Updated: 2024/10/29 12:23:40 by ldel-val          ``                      #
#                                                                              #
# **************************************************************************** #

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar

ARFLAGS = -rc

RM = rm -f

SRC = ft_printf.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
	@make clean -C $(LIBFT_DIR)
fclean: clean
	$(RM) $(NAME)
	@make fclean -C $(LIBFT_DIR)
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

re: fclean all 

.PHONY: all re clean fclean bonus
