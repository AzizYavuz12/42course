NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalpha.c ft_strlen.c ft_isalnum.c ft_atoi.c ft_isascii.c\
	ft_isprint.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strrchr.c\
	ft_strncmp.c ft_strnstr.c ft_bzero.c ft_memset.c ft_memcpy.c\
	ft_strlcpy.c ft_strlcat.c ft_memchr.c ft_memcmp.c ft_substr.c\
	ft_strjoin.c ft_strtrim.c ft_calloc.c ft_itoa.c ft_strmapi.c\
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c\
	ft_isdigit.c ft_memmove.c ft_strdup.c ft_striteri.c ft_putchar_fd.c
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
