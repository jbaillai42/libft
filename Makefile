#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jobailla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 11:29:22 by jobailla          #+#    #+#              #
#*   Updated: 2016/09/20 03:18:11 by jobailla         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_PATH = srcs
INC_PATH = includes
O_PATH = objets
C_FILE = *.c
O_FILE = $(C_FILE:.c=.o)
COMPIL = gcc
FLAGS = -Wall -Wextra -Werror
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
	@$(COMPIL) $(FLAGS) -c $(SRC_PATH)/$(C_FILE)
	@ar rc $(NAME) $(O_FILE)
	@ranlib $(NAME)
	@mkdir $(O_PATH)/ && mv $(O_FILE) $(O_PATH)/
	@echo	"$(RED)NOTE: $(WHITE)Pour afficher la liste des commandes : \
	$(GREEN)make help"

help:
	@echo "$(YELLOW)\t\t====== AIDE ======\n"
	@echo "$(GREEN)make all\t$(WHITE)Compiler la libft\n"
	@echo "$(GREEN)make clean\t$(WHITE)Effacer les fichier .o\n"
	@echo "$(GREEN)make fclean\t$(WHITE)Effacer tous fichiers crees par le \
	makefile\n"
	@echo "$(GREEN)make re\t\t$(WHITE)Effacer et recompiler\n"
	@echo "$(GREEN)make norme\t$(WHITE)Verifier la norme\n"

norme:
	@norminette $(SRC_PATH)/$(C_FILE)

clean:
	@rm -rf $(O_PATH)
	@echo "$(RED)Suppression du repertoire $(O_PATH)\t\t\t$(GREEN)OK"

fclean:clean
	@rm -f $(NAME)
	@echo "$(RED)Suppression des des fichier cree par le Makefile\t$(GREEN)OK"

re: fclean all
