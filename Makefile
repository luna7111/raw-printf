# **************************************************************************** #
#                                                                              #
#                                                     _.._  .           .      #
#    Makefile                                       .' .-'`        *           #
#                                                  /  /       +        *       #
#    By: ldel-val <ldel-val@student.42madrid.c     |  |           *            #
#                                                  \  '.___.;       +          #
#    Created: 2024/10/28 20:24:50 by ldel-val       '._  _.'   .        .      #
#    Updated: 2024/11/02 23:16:14 by ldel-val          ``                      #
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
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
	@make clean -C $(LIBFT_DIR)
fclean:
	$(RM) $(NAME) $(OBJ)
	@make fclean -C $(LIBFT_DIR)
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

re: fclean all 

.PHONY: all re clean fclean
