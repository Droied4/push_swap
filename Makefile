# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: deordone <deordone@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 11:18:16 by deordone          #+#    #+#              #
#    Updated: 2023/12/12 16:06:09 by deordone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SOURCES = ft_bigsort.c ft_lst.c ft_push.c ft_rotate.c \
	  ft_utils.c ft_checker.c ft_micro_sorts.c \
	  ft_reverse.c ft_swap.c push_swap.c
		  
HEADER = include/push_swap.h

BINDIR = bin

OBJECTS = $(addprefix obj/, ${SOURCES:.c=.o})

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude
AR = ar -rcs

all: header $(NAME)

$(NAME): $(OBJECTS)
		$(AR) $(NAME) $(OBJECTS)

obj/%.o: src/%.c $(HEADER) Makefile
		@mkdir -p $(dir $@)
		 $(CC) $(CFLAGS) -c $< -o $@

clean: ok
	rm -rf obj

fclean : ok clean
		rm -rf $(NAME)

re: fclean all 

# Definición de códigos de colores ANSI
RED=\033[0;31m
BLUE=\033[0;34m
GREEN=\033[0;32m
YELLOW=\033[0;33m
WHITE=\033[0;97m
EPIC_RED=\033[1;35m
NC=\033[0m # No color

header:
	@printf "\n";  
	@printf "$(YELLOW)                   ▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
	@printf "               ▒▒▒▒▒▒▒▒▒     ▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒\n";
	@printf "             ▒▒▒▒▒▒▒▒▒       ▒▒▒▒     ▒▒▒▒▒▒▒\n";
	@printf "           ▒▒▒▒▒▒▒▒▒         ▒▒      ▒▒▒▒▒▒▒\n";
	@printf "         ▒▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n";
	@printf "       ▒▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n";
	@printf "     ▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n";
	@printf "   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒     ▒▒▒▒▒▒▒▒     ▒▒\n";
	@printf "   ▒▒▒▒▒▒ Droied$(YELLOW) ▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒    ▒▒▒▒\n";
	@printf "   ▒▒▒▒▒▒▒ Pacman ▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒\n";
	@printf "   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▒▒ Barcelona ▒▒▒\n";
	@printf "   ░░░░░ $(BLUE)  ░░░░░ $(YELLOW) ▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
	@printf "  ░░░░$(WHITE)▀$(YELLOW)░░$(BLUE) ░$(WHITE)▄ $(BLUE)░$(WHITE)▄ $(BLUE)░ $(YELLOW)▒▒▒▒▒▒▒▒      |\n";
	@printf "  ░░░░░  $(BLUE) ░░░░░░░$(YELLOW) ▒▒▒▒▒▒▒▒      ╰┈➤Push_swap \n";
	@printf "   ░░░░░ $(BLUE) ░ ░ ░ ░$(YELLOW) ▒▒▒▒▒▒▒▒$(NC)\n";
	@printf "\n";  
 
help: 
	@printf "\n";  
	@printf "	▂▃▅▆█▆▅▃▂ Commands ▂▃▅▆█▆▅▃▂\n";
	@printf "$(BLUE)		  ► help \n";
	@printf "		  ► clean \n";
	@printf "		  ► fclean \n";
	@printf "		  ► re \n";
	@printf "		  ► author $(NC)  \n";
	@printf "\n"; 
#	@tput setaf 009; echo "		  ► bonus "

author: 
	@printf "\n";
	@printf "$(GREEN)		       	       Created by Droied - Ataraxia\n";
	@printf "$(EPIC_RED)		  ══════════════════════════「₪」══════════════════════════\n";
	@printf "$(GREEN)		        	https://github.com/Droied4 \n";
	@printf "\n"; 

ok:
	@printf "\n"; 
	@printf "$(GREEN)Ok";
	@printf "\n"; 
.PHONY: all clean fclean re
