NAME = libft.a

SRC = $(shell find . -name "*.c")

OBJ = ${SRC:.c=.o}

OBJ_BONUS = ${SRC_BONUS:.c=.o}

CFLAGS = -Wall -Werror -Wextra

COMPILE = gcc $(CFLAGS) -c

LIB = ar rc $(NAME)

RANLIB = ranlib $(NAME)

REMOVE = rm -f

all:	$(NAME)

$(NAME):
	$(COMPILE) $(SRC)
	@$(LIB) $(OBJ)
	@$(RANLIB)
clean:
	@$(REMOVE) $(OBJ)

fclean: clean
	@$(REMOVE) $(NAME)

re: fclean all

.c.o:
	gcc -c $(SRC)

.PHONY: all clean fclean re
