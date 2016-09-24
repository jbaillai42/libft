#****************************************************************************  #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 11:29:22 by jobailla          #+#    #+#              #
#*   Updated: 2016/09/24 17:04:49 by                  ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CORREC = 
NO = \#
INC_PATH = includes
SRC_PATH = srcs
O_PATH = objets
EXEC_PATH = exec
MAIN_PATH = main_
SRC = $(addprefix $(SRC_PATH)/,$(C_FILE))
C_FILE = ft_putchar.c ft_putstr.c ft_strlen.c #ft_strdup.c ft_strcpy.c \
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
	@$(CORREC)echo "$(MAGENTA)\t*****************************************"
	@$(CORREC)echo "$(MAGENTA)\t*\t Mode Correction Actif\t\t*"
	@$(CORREC)echo "$(MAGENTA)\t*****************************************\n"
	@echo "$(GREEN)[OK]\t$(BLUE)Compilation des fichiers objets"
	@ar rc $(NAME) $(O_FILE)
	@echo "$(GREEN)[OK]\t$(BLUE)Creation de la librairie"
	@ranlib $(NAME)
	@echo "$(GREEN)[OK]\t$(BLUE)Creation de l'index pour $(NAME)\n"
	@mkdir -p $(O_PATH) 
	@mv $(O_FILE) ./$(O_PATH)/
	@echo "$(CYAN)\t*****************************************"
	@echo "$(CYAN)\t*\t Localisation des fichiers\t*"
	@echo "$(CYAN)\t*****************************************\n"
	@echo "\t$(WHITE)Fichiers C :\t\t$(CYAN)$(SRC_PATH)/"
	@echo "\t$(WHITE)Fichiers objets :\t$(CYAN)$(O_PATH)/"
	@$(CORREC)echo "\t$(WHITE)Fichiers mains :\t$(CYAN)$(MAIN_PATH)srcs/"
	@$(CORREC)echo "\t$(WHITE)Fichiers executabes :\t$(CYAN)$(EXEC_PATH)/\n"

%.o: %.c
	@$(CORREC)mkdir -p $(EXEC_PATH)
	@$(COMPIL) -c $< -I $(INC_PATH) -o $@ 
	@echo "$(GREEN)[OK]\t$(WHITE)Compilation en fichier objets :\t\t$(GREEN)$@"
	@$(CORREC)$(COMPIL) $(MAIN_PATH)$(<:.c=_main.c) $(NAME) -o $*
	@$(CORREC)echo "$(YELLOW)[OK]\t$(WHITE)Compilation en fichier executable :\
	\t$(YELLOW)$*\n"
	@$(CORREC)mv $* ./$(EXEC_PATH)/

help:
	@echo "$(YELLOW)\n\t\t================ AIDE ================\n"
	@echo "$(GREEN)make all\t$(WHITE)Compiler la libft"
	@echo "$(GREEN)make clean\t$(WHITE)Effacer les fichier .o"
	@echo "$(GREEN)make fclean\t$(WHITE)Effacer tous fichiers crees par le \
	makefile"
	@echo "$(GREEN)make re\t\t$(WHITE)Effacer et recompiler"
	@echo "$(GREEN)make norme\t$(WHITE)Verifier la norme\n\n"
	@echo "$(MAGENTA)Mode Correction\n\n\t$(WHITE)Pour activer le mode \
	correction suivre les instructions suivantes :\n\n \t\t- Faire un \
	premier Make en mode normal\n\t\t- Editer le Makefile\n \
	\t\t- Supprimer $(CYAN)\# $(WHITE)sur la variable $(RED)CORREC\n \
	\t\t$(WHITE)- Ajouter $(CYAN)\# $(WHITE)sur la varibale $(RED)NO \
	\n\n\t$(WHITE)Pour revenir en mode normal faire l'inverse\n"

norme:
	@norminette $(SRC_PATH)/$(C_FILE)

clean:
	@rm -rf $(O_PATH) $(EXEC_PATH)
	@echo "$(GREEN)[OK]\t$(RED) Suppression des fichiers objets"

fclean:clean
	@$(NO)rm -f $(NAME)
	@rm -f $(SRC_PATH)/$(C_FILE:.c=) $(O_FILE)
	@echo "$(GREEN)[OK]\t$(RED)Suppression des des fichiers cree par le \
	Makefile\n"

re: fclean all

.PHONY: all $(NAME) help norme clean flcean re
