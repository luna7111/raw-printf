# **************************************************************************** #
#                                                                              #
#                                                     _.._  .           .      #
#    Makefile                                       .' .-'`        *           #
#                                                  /  /       +        *       #
#    By: ldel-val <ldel-val@student.42madrid.c     |  |           *            #
#                                                  \  '.___.;       +          #
#    Created: 2024/10/28 20:24:50 by ldel-val       '._  _.'   .        .      #
#    Updated: 2024/10/28 20:47:34 by ldel-val          ``                      #
#                                                                              #
# **************************************************************************** #

LIBFT = libft/libft.a

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar

ARFLAGS = -rc

RM = rm -f

SRC = ft_printf.c

OBJ = $(SRC:.c=.o)

$(LIBFT):
	$(MAKE) -C libft
all: $(NAME)

$(NAME): $(OBJ)

clean:
	$(RM) $(OBJ)
fclean:
	$(RM) $(NAME)
re: fclean all

.PHONY: all re clean fclean bonus
