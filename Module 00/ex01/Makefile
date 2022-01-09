# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: mrozniec <mrozniec@student.le-101.fr>      +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/04/06 15:35:16 by mrozniec          #+#    #+#             #
#   Updated: 2021/04/07 01:19:59 by mrozniec         ###   ########lyon.fr   #
#                                                                            #
# ************************************************************************** #

NAME = annuaire

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