NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_unsignednbr.c ft_puthex.c ft_putpointer.c
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re
