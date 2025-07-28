NAME: get_next_line.a
CC: cc
CFLAGS: -Wall -Wextra -Werror
SRC:
OBJS: $(SRC: .c=.o)

all: $(NAME)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
