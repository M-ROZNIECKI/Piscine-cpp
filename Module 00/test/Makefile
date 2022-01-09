# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: mrozniec <mrozniec@student.le-101.fr>      +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/04/06 15:35:16 by mrozniec          #+#    #+#             #
#   Updated: 202#   Updated: 2022/01/08 23:56:40 by mrozniec         ###   ########.fr       #                                                              #
# ************************************************************************** #

NAME = test

FLAGS = -lpthread

SRC =		$(wildcard *.cpp)

HEADER =	$(wildcard *.hpp)

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
		@clang++ $(FLAGS) -O3 -o$(NAME) $(SRC) /usr/lib/libgtest.a

.PHONY: clean fclean re all

clean:
		@/bin/rm $(NAME)

fclean: clean
		@/bin/rm -rf $(NAME)

re: fclean all
