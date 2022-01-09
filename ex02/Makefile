# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2022/01/09 13:38:35 by mrozniec          #+#    #+#             #
#   Updated: 2022/01/09 13:38:35 by mrozniec         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME = test

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =		$(wildcard *.cpp)

HEADER =	$(wildcard *.hpp)

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
		@clang++ $(FLAGS) -O3 -o$(NAME) $(SRC)

.PHONY: clean fclean re all

clean:
		@/bin/rm $(NAME)

fclean: clean
		@/bin/rm -rf $(NAME)

re: fclean all