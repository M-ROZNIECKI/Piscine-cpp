NAME = mutantStack

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =		$(wildcard *.cpp)

HEADER =	$(wildcard *.hpp) $(wildcard *.tpp)

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
		@clang++ $(FLAGS) -O3 -o$(NAME) $(SRC)

.PHONY: clean fclean re all

clean:
		@/bin/rm $(NAME)

fclean: clean
		@/bin/rm -rf $(NAME)

re: fclean all