# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: mrozniec <mrozniec@student.le-101.fr>      +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/04/06 15:20:21 by mrozniec          #+#    #+#             #
#   Updated: 2021/04/06 15:31:55 by mrozniec         ###   ########lyon.fr   #
#                                                                            #
# ************************************************************************** #

NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
		@clang++ $(FLAGS) -o$(NAME) $(SRC)

.PHONY: clean fclean re all

clean:
		@/bin/rm $(NAME)

fclean: clean
		@/bin/rm -rf $(NAME)

re: fclean all