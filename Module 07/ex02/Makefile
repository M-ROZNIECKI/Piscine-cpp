# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2022/02/06 15:04:40 by mrozniec          #+#    #+#             #
#   Updated: 2022/02/06 15:18:10 by mrozniec         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME = arrayman

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =		$(wildcard *.cpp)

HEADER =	$(wildcard *.hpp) $(wildcard *.tpp)

OBJ =	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
		@c++ $(FLAGS) -O3 -o$(NAME) $(OBJ)

%.o: %.cpp $(HEADER)
		@c++ -o $@ -c $< $(FLAGS)

.PHONY: clean fclean re all

clean:
		@/bin/rm -rf $(OBJ)

fclean: clean
		@/bin/rm -rf $(NAME)

re: fclean all