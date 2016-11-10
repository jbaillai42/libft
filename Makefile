#****************************************************************************  #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 11:29:22 by jobailla          #+#    #+#              #
#*   Updated: 2016/11/04 00:17:48 by jobailla         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMPIL = clang -Wall -Wextra -Werror

# CORRECTION MODE #
CORREC = \#
NO = 


# DIRS #
INC_DIR = includes
SRC_DIR = srcs
O_DIR = objets
EXEC_DIR = exec
MAIN_DIR = main_
SRC = $(addprefix $(SRC_DIR)/,$(C_FILE))

# FILES #
C_FILE = $(LIBC) $(FT) $(BONNUS)
LIBC =		ft_memset.c		ft_bzero.c		ft_strlen.c		ft_strdup.c		\
			ft_strcpy.c		ft_strncpy.c	ft_strcat.c		ft_strncat.c	\
			ft_strlcat.c	ft_strstr.c		ft_strnstr.c	ft_strcmp.c 	\
			ft_strncmp.c	ft_atoi.c		ft_isalpha.c	ft_isdigit.c 	\
			ft_isalnum.c	ft_isascii.c	ft_isprint.c	ft_toupper.c 	\
			ft_tolower.c	ft_memcpy.c		ft_memccpy.c	ft_memcmp.c		\
			ft_memmove.c	ft_strchr.c		ft_strrchr.c	ft_memchr.c		

FT =		ft_strclr.c		ft_putchar.c	ft_putstr.c		ft_putendl.c	\
			ft_putnbr.c		ft_putchar_fd.c	ft_putstr_fd.c	ft_putnbr_fd.c	\
			ft_memalloc.c	ft_memdel.c		ft_strdel.c		ft_strnew.c		\
			ft_striter.c	ft_striteri.c

BONNUS =	ft_islower.c	ft_isupper.c	ft_isblank.c

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
	
	@mkdir -p $(O_DIR) 
	@mv $(O_FILE) ./$(O_DIR)/
	@echo "$(CYAN)\t*****************************************"
	@echo "$(CYAN)\t*\t Localisation des fichiers\t*"
	@echo "$(CYAN)\t*****************************************\n"
	@echo "\t$(W)Fichiers C :\t\t$(CYAN)$(SRC_DIR)/"
	@echo "\t$(W)Fichiers objets :\t$(CYAN)$(O_DIR)/"
	@$(CORREC)echo "\t$(W)Fichiers mains :\t$(CYAN)$(MAIN_DIR)srcs/"
	@$(CORREC)echo "\t$(W)Fichiers executabes :\t$(CYAN)$(EXEC_DIR)/\n"

%.o: %.c
	@$(CORREC)mkdir -p $(EXEC_DIR)
	@$(COMPIL) -c $< -I $(INC_DIR) -o $@
	@echo "$(G)[OK]\t$(W)Compilation en fichier objets :\t$(G)$@"
	@$(CORREC)$(COMPIL) $(MAIN_DIR)$(<:.c=_main.c) $(NAME) -o $*
	@$(CORREC)echo "$(Y)[OK]\t$(W)Compilation en fichier executable :\
	\t$(Y)$*\n"
	@$(CORREC)mv $* ./$(EXEC_DIR)/

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
	./sh/norme.sh

verif: ../libft_unit_test/
	./sh/verif.sh

brench: verif
	./sh/brench.sh

clean:
	@rm -rf $(O_DIR) $(EXEC_DIR)
	@echo "$(G)[OK]\t$(R) Suppression des fichiers objets"

fclean: clean
	@$(NO)rm -f $(NAME)
	@rm -rf $(O_DIR) $(EXEC_DIR)
	@echo "$(G)[OK]\t$(R)Suppression des des fichiers cree par le \
	Makefile\n"

re: fclean all

.PHONY: all $(NAME) help norme verif brench clean flcean re
