# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2022/01/28 23:30:47 by mrozniec          #+#    #+#             #
#   Updated: 202#   Updated: 2022/02/05 18:39:46 by mrozniec         ###   ########.fr       #                                                              #
# ************************************************************************** #

NAME = serialization

FLAGS = -Wall -Wextra -Werror

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