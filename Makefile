#****************************************************************************  #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 11:29:22 by jobailla          #+#    #+#              #
#*   Updated: 2016/10/18 23:01:52 by jobailla         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMPIL = clang -Wall -Wextra -Werror

# CORRECTION MODE #
CORREC = \#
NO = 


# PATHS #
INC_PATH = includes
SRC_PATH = srcs
O_PATH = objets
EXEC_PATH = exec
MAIN_PATH = main_
SRC = $(addprefix $(SRC_PATH)/,$(C_FILE))

# FILES #
C_FILE = ft_putchar.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_putnbr.c \
		ft_isspace.c \
		ft_isblank.c \
		ft_isgraph.c \
		ft_ispunct.c \
		ft_islower.c \
		ft_isupper.c \
		ft_memset.c \
		ft_bzero.c \
		ft_strncat.c \
		ft_strnstr.c \
		ft_isxdigit.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c
O_FILE = $(SRC:.c=.o)
EXEC_FILE = $(C_FILE:.)

# COLORS #
R = \033[0;31m
G = \033[0;32m
B = \033[1;34m
Y = \033[0;33m
W = \033[0;97m
CYAN = \033[0;36m
MAGENTA = \033[0;35m

all: $(NAME)

$(NAME): $(O_FILE)
	@echo "\t\t$(Y) _      _ _      __ _     _     "
	@echo "\t\t$(Y)| |    (_) |    / _| |   | |    "
	@echo "\t\t$(Y)| |     _| |__ | |_| |_  | |__  "
	@echo "\t\t$(Y)| |    | | '_ \|  _| __| | '_ \ "
	@echo "\t\t$(Y)| |____| | |_) | | | |_ _| | | |"
	@echo "\t\t$(Y)|______|_|_.__/|_|  \__(_)_| |_|"
	@echo "\t\t$(Y)\t\t\t\tBy Jobailla\n"
	@echo	"   $(R)NOTE: $(W)Pour afficher la liste des commandes : \
	$(G)make help\n"
	
	@$(CORREC)echo "$(MAGENTA)\t*****************************************"
	@$(CORREC)echo "$(MAGENTA)\t*\t Mode Correction Actif\t\t*"
	@$(CORREC)echo "$(MAGENTA)\t*****************************************\n"
	@echo "$(G)[OK]\t$(B)Compilation des fichiers objets"
	@ar rc $(NAME) $(O_FILE)
	@echo "$(G)[OK]\t$(B)Creation de la librairie"
	@ranlib $(NAME)
	@echo "$(G)[OK]\t$(B)Creation de l'index pour $(NAME)\n"
	
	@mkdir -p $(O_PATH) 
	@mv $(O_FILE) ./$(O_PATH)/
	@echo "$(CYAN)\t*****************************************"
	@echo "$(CYAN)\t*\t Localisation des fichiers\t*"
	@echo "$(CYAN)\t*****************************************\n"
	@echo "\t$(W)Fichiers C :\t\t$(CYAN)$(SRC_PATH)/"
	@echo "\t$(W)Fichiers objets :\t$(CYAN)$(O_PATH)/"
	@$(CORREC)echo "\t$(W)Fichiers mains :\t$(CYAN)$(MAIN_PATH)srcs/"
	@$(CORREC)echo "\t$(W)Fichiers executabes :\t$(CYAN)$(EXEC_PATH)/\n"

%.o: %.c
	@$(CORREC)mkdir -p $(EXEC_PATH)
	@$(COMPIL) -c $< -I $(INC_PATH) -o $@
	@echo "$(G)[OK]\t$(W)Compilation en fichier objets :\t\t$(G)$@"
	@$(CORREC)$(COMPIL) $(MAIN_PATH)$(<:.c=_main.c) $(NAME) -o $*
	@$(CORREC)echo "$(Y)[OK]\t$(W)Compilation en fichier executable :\
	\t$(Y)$*\n"
	@$(CORREC)mv $* ./$(EXEC_PATH)/

help:
	@echo "$(Y)\n\t\t================ AIDE ================\n"
	@echo "$(G)make all\t$(W)Compiler la libft"
	@echo "$(G)make clean\t$(W)Effacer les fichier .o"
	@echo "$(G)make fclean\t$(W)Effacer tous fichiers crees par le \
	makefile"
	@echo "$(G)make re\t\t$(W)Effacer et recompiler"
	@echo "$(G)make norme\t$(W)Verifier la norme\n\n"
	@echo "$(MAGENTA)Mode Correction\n\n\t$(W)Pour activer le mode \
	correction suivre les instructions suivantes :\n\n \t\t- Faire un \
	premier Make en mode normal\n\t\t- Editer le Makefile\n \
	\t\t- Supprimer $(CYAN)\# $(W)sur la variable $(R)CORREC\n \
	\t\t$(W)- Ajouter $(CYAN)\# $(W)sur la varibale $(R)NO \
	\n\n\t$(W)Pour revenir en mode normal faire l'inverse\n"

norme:
	@norminette $(SRC_PATH)/$(C_FILE)

verif: ../libft_unit_test/
	./verif.sh

clean:
	@rm -rf $(O_PATH) $(EXEC_PATH)
	@echo "$(G)[OK]\t$(R) Suppression des fichiers objets"

fclean: clean
	@$(NO)rm -f $(NAME)
	@rm -rf $(O_PATH) $(EXEC_PATH)
	@echo "$(G)[OK]\t$(R)Suppression des des fichiers cree par le \
	Makefile\n"

re: fclean all

.PHONY: all $(NAME) help norme verif clean flcean re
