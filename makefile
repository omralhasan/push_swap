CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = crt_node.c \
      error_hand.c\
      main.c \
      ft_split.c \
      small_sort.c \
      oper.c \

OBJ = $(SRC:.c=.o)
NAME = push_swap

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re