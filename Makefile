CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = crt_node.c \
      error_hand.c\
      main.c \
      ft_split.c \
      small_sort.c \
      oper.c \
      oper_rotate.c \
      main_utils.c \
      push_lowest.c \
      list_core.c \
      sort_three.c \
      list_utils.c \
      oper_rev.c \
      sort_helpers.c \
      ft_substr.c\
      ft_strlen.c\
      ft_strdup.c\
      ft_strlcpy.c\
      radix.c

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