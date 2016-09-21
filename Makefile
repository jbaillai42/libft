#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jobailla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 11:29:22 by jobailla          #+#    #+#              #
#*   Updated: 2016/09/21 02:16:42 by                  ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INC_PATH = includes
SRC_PATH = srcs
O_PATH = objets
SRC = $(addprefix $(SRC_PATH)/,$(C_FILE))
C_FILE = ft_putchar.c ft_putstr.c ft_strlen.c ft_strdup.c ft_strcpy.c \
		ft_strncpy.c ft_strcat.c ft_strstr.c ft_strcmp.c ft_strncmp.c \
		ft_atoi.c ft_putnbr.c
O_FILE = $(SRC:.c=.o)
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
	@echo "$(YELLOW) _      _ _      __ _     _     "
	@echo "$(YELLOW)| |    (_) |    / _| |   | |    "
	@echo "$(YELLOW)| |     _| |__ | |_| |_  | |__  "
	@echo "$(YELLOW)| |    | | '_ \|  _| __| | '_ \ "
	@echo "$(YELLOW)| |____| | |_) | | | |_ _| | | |"
	@echo "$(YELLOW)|______|_|_.__/|_|  \__(_)_| |_|"
	@echo "$(YELLOW)\t\t\t\tBy Jobailla\n"
	@echo	"$(RED)NOTE: $(WHITE)Pour afficher la liste des commandes : \
	$(GREEN)make help\n"
	@echo "$(GREEN)[OK]\t$(BLUE)Compilation des fichiers objets"
	@ar rc $(NAME) $(O_FILE)
	@echo "$(GREEN)[OK]\t$(BLUE)Creation de la librairie"
	@ranlib $(NAME)
	@echo "$(GREEN)[OK]\t$(BLUE)Creation de l'index pour $(NAME)\n"

%.o: %.c
	@$(COMPIL) -c $< -I $(INC_PATH) -o $@
	@echo "$(GREEN)[OK]\t$(WHITE)Compilation du fichier : $@"

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

clean:
	@rm $(O_FILE)
	@echo "$(GREEN)[OK]\t$(RED) Suppression des fichiers objets"

fclean:clean
	@rm -f $(NAME)
	@echo "$(GREEN)[OK]\t$(RED)Suppression des des fichier cree par le \
	Makefile\n"

re: fclean all
