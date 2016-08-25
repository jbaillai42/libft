# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jobailla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 11:29:22 by jobailla          #+#    #+#              #
#    Updated: 2016/08/25 15:17:44 by jobailla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/
INCLUDES = includes/
COMPIL = gcc
FLAGS = -Wall -Wextra -Werror
OPTIONS = -o -I $(INCLUDES)
RED = \033[1;31m
BLUE = \033[1;34m
GREEN = \033[0;32m
YELLOW = \033[1;33m

all: $(NAME)

$(NAME):
	@echo "$(BLUE)Compilation de la libft....\n"
	@$(COMPIL) $(FLAGS) -c $(SRC)*.c
	@echo "$(GREEN)...Compilation OK !\n"
	@echo "$(BLUE)Creation de la libairie...\n"
	@ar rc $(NAME) *.o
	@echo "$(GREEN)...Librairie créee.\n"

index:
	@echo "$(GREEN)Créeation de l'index pour libft.a\n"
	@ranlib $(NAME)

clean:
	@echo "$(RED)Suppression des binaires...OK\n"
	@rm -f *.o

fclean:clean
	@echo "$(RED)Suppression de la libft\n"
	@rm -f $(NAME)

re: fclean all