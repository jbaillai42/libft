#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jobailla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 11:29:22 by jobailla          #+#    #+#              #
#*   Updated: 2016/09/22 23:31:35 by                  ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INC_PATH = includes
SRC_PATH = srcs
O_PATH = objets
EXEC_PATH = exec
MAIN_PATH = main_
SRC = $(addprefix $(SRC_PATH)/,$(C_FILE))
C_FILE = ft_putchar.c ft_putstr.c ft_strlen.c ft_strdup.c ft_strcpy.c \
		ft_strncpy.c ft_strcat.c ft_strstr.c ft_strcmp.c ft_strncmp.c \
		ft_atoi.c ft_putnbr.c
O_FILE = $(SRC:.c=.o)
EXEC_FILE = $(C_FILE:.c=)
COMPIL = clang -Wall -Wextra -Werror
RED = \033[0;31m
BLUE = \033[1;34m
CYAN = \033[0;36m
GREEN = \033[0;32m
YELLOW = \033[0;33m
WHITE = \033[0;97m
MAGENTA = \033[0;35m

all: $(NAME)

$(NAME): $(O_FILE)
	@echo "\t\t$(YELLOW) _      _ _      __ _     _     "
	@echo "\t\t$(YELLOW)| |    (_) |    / _| |   | |    "
	@echo "\t\t$(YELLOW)| |     _| |__ | |_| |_  | |__  "
	@echo "\t\t$(YELLOW)| |    | | '_ \|  _| __| | '_ \ "
	@echo "\t\t$(YELLOW)| |____| | |_) | | | |_ _| | | |"
	@echo "\t\t$(YELLOW)|______|_|_.__/|_|  \__(_)_| |_|"
	@echo "\t\t$(YELLOW)\t\t\t\tBy Jobailla\n"
	@echo	"$(RED)NOTE: $(WHITE)Pour afficher la liste des commandes : \
	$(GREEN)make help\n"
	@echo "$(GREEN)[OK]\t$(BLUE)Compilation des fichiers objets"
	@ar rc $(NAME) $(O_FILE)
	@echo "$(GREEN)[OK]\t$(BLUE)Creation de la librairie"
	@ranlib $(NAME)
	@echo "$(GREEN)[OK]\t$(BLUE)Creation de l'index pour $(NAME)\n"
	@mkdir $(O_PATH) $(EXEC_PATH)
	@mv $(O_FILE) ./$(O_PATH)/
	mv $(SRC_PATH)/$(EXEC_FILE) ./$(EXEC_PATH)/

%.o: %.c
	@$(COMPIL) -c $< -I $(INC_PATH) -o $@ 
	@echo "$(GREEN)[OK]\t$(WHITE)Compilation en fichier objets : $@"
	@# Les ligne suivante servent a compilier les mains avec les fonctions.
	@# Les main se trouve dans le dossiser main_srcs.
	@#                   A UTILISER POUR LES CORRECTIONS
	@# Pour eviter les erreur d'inclusion la compilation se fait avec
	@# le fichier libft.a donc :
	@#                 - FAIRE UN PREMIER MAKE
	@#                 - ACTIVER LES LIGNES 61 - 62 
	@#                 - DESACTIVER LA LIGNE 83
	@$(COMPIL) $(MAIN_PATH)$(<:.c=_main.c) $(NAME) -o $*
	@@echo "$(YELLOW)[OK]\t$(WHITE)Compilation en fichier executable : $*"

help:
	@echo "$(YELLOW)\n\t\t====== AIDE ======\n"
	@echo "$(GREEN)make all\t$(WHITE)Compiler la libft\n"
	@echo "$(GREEN)make clean\t$(WHITE)Effacer les fichier .o\n"
	@echo "$(GREEN)make fclean\t$(WHITE)Effacer tous fichiers crees par le \
	makefile\n"
	@echo "$(GREEN)make re\t\t$(WHITE)Effacer et recompiler\n"
	@echo "$(GREEN)make norme\t$(WHITE)Verifier la norme\n"

norme:
	@norminette $(SRC_PATH)/$(C_FILE)

.PHONY: clean fclean

clean:
	@rm -rf $(O_PATH) $(EXEC_PATH)
	@echo "$(GREEN)[OK]\t$(RED) Suppression des fichiers objets"

fclean:clean
	@#rm -f $(NAME) # DESACTIVER EN MODE CORRECTION
	@rm -f $(SRC_PATH)/$(C_FILE:.c=)
	@echo "$(GREEN)[OK]\t$(RED)Suppression des des fichier cree par le \
	Makefile\n"

re: fclean all
