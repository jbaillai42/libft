# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jobailla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/23 19:27:01 by jobailla          #+#    #+#              #
#*   Updated: 2017/08/18 01:33:44 by jobailla         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME 			:= libft.a

INCS 			:= includes
SRCS 			:= libft
OBJS 			:= objs

SHELL 			:= /bin/bash

INCLUDES 		:= -I$(INCS)

# Search source files
SRC_FILES		:=	/|\
					ft_atoi.c|\
					ft_bzero.c|\
					ft_count_word.c|\
					ft_isalnum.c|\
					ft_isalpha.c|\
					ft_isascii.c|\
					ft_isblank.c|\
					ft_isblank_and_newline.c|\
					ft_isdigit.c|\
					ft_isgraph.c|\
					ft_islower.c|\
					ft_isprint.c|\
					ft_ispunct.c|\
					ft_isspace.c|\
					ft_isupper.c|\
					ft_isxdigit.c|\
					ft_itoa.c|\
					ft_lstadd.c|\
					ft_lstdel.c|\
					ft_lstdelone.c|\
					ft_lstiter.c|\
					ft_lstmap.c|\
					ft_lstnew.c|\
					ft_memalloc.c|\
					ft_memccpy.c|\
					ft_memchr.c|\
					ft_memcmp.c|\
					ft_memcpy.c|\
					ft_memdel.c|\
					ft_memmove.c|\
					ft_memset.c|\
					ft_nbrlen.c|\
					ft_putchar.c|\
					ft_putchar_fd.c|\
					ft_putendl.c|\
					ft_putendl_fd.c|\
					ft_putnbr.c|\
					ft_putnbr_fd.c|\
					ft_putstr.c|\
					ft_putstr_fd.c|\
					ft_strcat.c|\
					ft_strchr.c|\
					ft_strclr.c|\
					ft_strcmp.c|\
					ft_strcpy.c|\
					ft_strdel.c|\
					ft_strdup.c|\
					ft_strequ.c|\
					ft_striter.c|\
					ft_striteri.c|\
					ft_strjoin.c|\
					ft_strlcat.c|\
					ft_strlen.c|\
					ft_strmap.c|\
					ft_strmapi.c|\
					ft_strncat.c|\
					ft_strncmp.c|\
					ft_strncpy.c|\
					ft_strnequ.c|\
					ft_strnew.c|\
					ft_strnstr.c|\
					ft_strrchr.c|\
					ft_strsplit.c|\
					ft_strstr.c|\
					ft_strsub.c|\
					ft_strtrim.c|\
					ft_tolower.c|\
					ft_toupper.c|\
					get_next_line.c\

#C_FILES 		:= $(shell find $(SRCS) -type f | grep "\.c") #	Not secure
C_FILES 		:= $(shell  find $(SRCS) -type f | egrep '$(SRC_FILES)')

C_DIRS			:= $(shell find $(SRCS) -type d)/
C_FLAGS			+= -Wall -Wextra -Werror -MMD -g -O2 -ggdb

# Build .o list
O_DIRS			:= $(addprefix $(OBJS)/,$(C_DIRS))
O_FILES			:= $(C_FILES:%.c=$(OBJS)/%.o)
#O_FILES_UNIT	:= $(C_FILES_UNIT:%.c=$(OBJS)/%.o)

#DEPS			:= $(O_FILES:.o=.d)

# Create OBJS and childs
$(shell mkdir -p $(O_DIRS)$(OBJS))

# Print
ACTUAL			= $(words $(COUNT))
TOTAL 			= $(words $(filter %.c,$(C_FILES)))
CALCUL			= $(shell echo $(ACTUAL)\*100\/$(TOTAL) | bc)
PYTHON			= $(shell python -c "print '%-10s' % ('I'*($(CALCUL)/10))")

# Color
RED_G			= \033[31;1m
GREEN_G			= \033[32;1m
NRM				= \033[0m]

RED				:= \x1b[31m
YELLOW			:= \x1b[33m
GREEN			:= \x1b[32m
CYAN			:= \x1b[36m
BLUE			:= x1b[34m
PURPLE			:= \x1b[35m

PRINT_RED		= printf " [$(RED_G)%s$(NRM)$(RED_G)\t%3s%%$(RED_G)\t-->>\t$(YELLOW)%-65s\033[0m\r" "$(PYTHON)" "$(CALCUL)"
PRINT_GREEN		= printf " [$(GREEN_G)%s$(NRM)$(GREEN_G)\t%3s%%\t-->>\t$(GREEN_G)%-65s\033[0m\r" "    Ok!   " "100"


all:
	make -j $(NAME)

$(NAME): $(O_FILES)
	$(PRINT_GREEN) $(SRCS) && echo || exit;
	ar rc $(NAME) $(O_FILES)
	ranlib $(NAME)

$(OBJS)/%.o: %.c
	clang $(C_FLAGS) $(INCLUDES) -o $@ -c $< && $(eval COUNT+=1) $(PRINT_RED) $< || exit

clean:
	@rm -rf $(O_FILES) $(OBJS) 2> /dev/null

fclean: clean
	@rm -f $(NAME) 2> /dev/null

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
.SILENT:
