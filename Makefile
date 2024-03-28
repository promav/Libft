NAME = libft.a

SRCS = lib_1.c lib_2.c
OBJS = $(SRCS:.c=.o)

CC = gcc

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c 
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re