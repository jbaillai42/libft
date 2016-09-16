#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jobailla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 11:29:22 by jobailla          #+#    #+#              #
#*   Updated: 2016/09/17 01:05:58 by                  ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/*.c
INCLUDES = includes/
COMPIL = gcc
FLAGS = -Wall -Wextra -Werror
OPTIONS = -o -I $(INCLUDES)
RED = \033[0;31m
BLUE = \033[1;34m
GREEN = \033[0;32m
YELLOW = \033[0;33m
MAGENTA = \033[95m
WHITE = \033[0;97m

all: $(NAME)

$(NAME):
	@echo "$(YELLOW) _      _ _      __ _     _     "
	@echo "$(YELLOW)| |    (_) |    / _| |   | |    "
	@echo "$(YELLOW)| |     _| |__ | |_| |_  | |__  "
	@echo "$(YELLOW)| |    | | '_ \|  _| __| | '_ \ "
	@echo "$(YELLOW)| |____| | |_) | | | |_ _| | | |"
	@echo "$(YELLOW)|______|_|_.__/|_|  \__(_)_| |_|\n"
	@$(COMPIL) $(FLAGS) -c $(SRC)
	@ar rc $(NAME) *.o
	@ranlib $(NAME)
	@echo	"$(RED)NOTE : $(WHITE)Pour afficher la liste des commandes : \
	$(GREEN)make help"

help:
	@echo "$(YELLOW)\t\t====== AIDE ======\n"
	@echo "$(WHITE)Compiler la libft :\n$(GREEN)make all"
	@echo "$(WHITE)Effacer les fichier .o :\n$(GREEN)make clean"
	@echo "$(WHITE)Effacer tous fichiers crees par le makefile :\
	\n$(GREEN)make fclean"
	@echo "$(WHITE)Effacer et recompiler :\n$(GREEN)make re"
	@echo "$(WHITE)Verifier la norme :\n$(GREEN)make norme"

norme:
	@norminette $(SRC)

clean:
	@rm -f *.o
	@echo "$(RED)Suppression des fichiers objets"

fclean:clean
	@rm -f $(NAME)
	@echo "$(RED)Suppression des des fichier cree par le Makefile"

re: fclean all
