#****************************************************************************  #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jobailla <jobailla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 11:29:22 by jobailla          #+#    #+#              #
#*   Updated: 2016/11/11 21:54:56 by jobailla         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMPIL = clang -Wall -Wextra -Werror

# DIRS #
INC_DIR = includes
SRC_DIR = srcs
O_DIR = objets
EXEC_DIR = exec
MAIN_DIR = main_
SRC = $(addprefix $(SRC_DIR)/,$(C_FILE))

# FILES #
C_FILE = $(LIBC) $(FT) $(BONNUS) $(PERSO)
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
			ft_striter.c	ft_striteri.c	ft_strmap.c		ft_itoa.c		\
			ft_strmapi.c	ft_strequ.c		ft_strnequ.c	ft_strsub.c		\
			ft_strjoin.c	ft_strtrim.c	ft_putendl_fd.c	ft_strsplit.c

BONNUS =	ft_islower.c	ft_isupper.c	ft_isblank.c	ft_lstnew.c		\
			ft_lstdelone.c	ft_lstdel.c		ft_lstadd.c		ft_lstiter.c	\
			ft_lstmap.c

PERSO =		ft_nbrlen.c		ft_isblank_and_newline.c	ft_isspace.c		\
			ft_count_word.c

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

%.o: %.c
	@$(COMPIL) -c $< -I $(INC_DIR) -o $@
	@echo "$(G)[OK]\t$(B)$*" | sed 's/srcs\///g'

help:
	@echo "$(Y)\n\t\t================ AIDE ================\n"
	@echo "$(G)make all\t$(W)Compiler la libft"
	@echo "$(G)make clean\t$(W)Effacer les fichier .o"
	@echo "$(G)make fclean\t$(W)Effacer tous fichiers crees par le \
	makefile"
	@echo "$(G)make re\t\t$(W)Effacer et recompiler"
	@echo "$(G)make list\t$(W)Affiche la liste des fonctions"
	@echo "$(G)make norme\t$(W)Verifier la norme"
	@echo "$(G)make verif\t$(W)Verifier les fonction de la libft via unit-test"
	@echo "$(G)make brench\t$(W)Tester la vitesse de fonctions de la libc\n\n"

list:
	@echo $(C_FILE:.c=) | tr ' ' '\n'

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
	@rm -f $(NAME)
	@rm -rf $(O_DIR) $(EXEC_DIR)
	@echo "$(G)[OK]\t$(R)Suppression des des fichiers cree par le \
	Makefile\n"

re: fclean all

.PHONY: all $(NAME) help list norme verif brench clean flcean re
