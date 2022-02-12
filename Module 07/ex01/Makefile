# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2022/01/28 23:30:47 by mrozniec          #+#    #+#             #
#   Updated: 2022/01/28 23:30:47 by mrozniec         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME = iter

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =		$(wildcard *.cpp)

HEADER =	$(wildcard *.hpp)

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