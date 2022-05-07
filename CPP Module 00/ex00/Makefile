NAME=megaphone
CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
LDFLAGS=
SRC=megaphone.cpp
O=obj
OBJ=$(SRC:%.cpp=$O/%.o)

ERASE		=	\033[2K\r
BLUE		=	\033[34m
YELLOW		=	\033[33m
GREEN		=	\033[32m
END			=	\033[0m

all: $(NAME)

$O:
	@mkdir -p $@

$O/%.o: %.cpp | $O
	$(CC) $(CFLAGS) -c $< -o $@
	printf "$(BLUE)> $<$(END)\n"

$(NAME): $(OBJ) Makefile
	$(CC) $(LDFLAGS) $(OBJ) -o $(NAME)
	printf "$(GREEN)$@ made$(END)\n"

clean:
	rm -rdf $O
	printf "$(YELLOW)$O removed$(END)\n"

fclean: clean
	rm -f $(NAME)
	printf "$(YELLOW)$(NAME) removed$(END)\n"

re: fclean all

.PHONY: all clean fclean re
.SILENT:
