#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jobailla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 11:29:22 by jobailla          #+#    #+#              #
#    Updated: 2016/08/25 17:12:42 by jobailla         ###   ########.fr        #
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
MAGENTA = \033[95m

all: $(NAME)

$(NAME):
	@echo "$(YELLOW) _      _ _      __ _     _     "
	@echo "$(YELLOW)| |    (_) |    / _| |   | |    "
	@echo "$(YELLOW)| |     _| |__ | |_| |_  | |__  "
	@echo "$(YELLOW)| |    | | '_ \|  _| __| | '_ \ "
	@echo "$(YELLOW)| |____| | |_) | | | |_ _| | | |"
	@echo "$(YELLOW)|______|_|_.__/|_|  \__(_)_| |_|"
	@echo "$(BLUE)Compilation de la libft...."
	@$(COMPIL) $(FLAGS) -c $(SRC)*.c
	@echo "$(GREEN)Compilation OK !\n"
	@echo "$(BLUE)Creation de la libairie..."
	@ar rc $(NAME) *.o
	@echo "$(GREEN)Librairie créee."

index: $(NAME)
	@ranlib $(NAME)
	@echo "$(MAGENTA)Créeation de l'index pour libft.a"

clean:
	@rm -f *.o
	@echo "$(RED)Suppression des fichiers objets"

fclean:clean
	@rm -f $(NAME)
	@echo "$(RED)Suppression de la libft_creator"

re: fclean all
