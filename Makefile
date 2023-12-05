# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: deordone <deordone@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 11:18:16 by deordone          #+#    #+#              #
#    Updated: 2023/12/05 18:23:22 by deordone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

DIRECTORIES = $(wildcard */)

SOURCES = $(foreach dir,$(DIRECTORIES), $(wildcard $(dir)*.c)) 
		  

HEADER = push_swap.h

OBJECTS = $(SOURCES:.c=.o)

DEPS = $(OBJECTS:.o=.d)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs

all: header $(NAME)

$(NAME): $(OBJECTS) 
		$(AR) $(NAME) $(OBJECTS)

-include $(DEPS)

%.o: %.c $(HEADER) Makefile
		$(CC) $(CFLAGS) -c $< -o $@
	
clean: ok
	rm -f $(OBJECTS)

fclean : ok clean
		rm -rf $(NAME)

re: fclean all 

header:
	@tput setaf 214; printf "                   ▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
	@tput setaf 214; printf "               ▒▒▒▒▒▒▒▒▒     ▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒\n";
	@tput setaf 214; printf "             ▒▒▒▒▒▒▒▒▒       ▒▒▒▒     ▒▒▒▒▒▒▒\n";
	@tput setaf 214; printf "           ▒▒▒▒▒▒▒▒▒         ▒▒      ▒▒▒▒▒▒▒\n";
	@tput setaf 214; printf "         ▒▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n";
	@tput setaf 214; printf "       ▒▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n";
	@tput setaf 214; printf "     ▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n";
	@tput setaf 214; printf "   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒     ▒▒▒▒▒▒▒▒     ▒▒\n";
	@tput setaf 214; printf "   ▒▒▒▒▒▒ Droied ▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒    ▒▒▒▒\n";
	@tput setaf 214; printf "   ▒▒▒▒▒▒▒ Pacman ▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒\n";
	@tput setaf 214; printf "   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▒▒ Barcelona ▒▒▒\n";
	@tput setaf 214; printf "   ░░░░░   ░░░░░  ▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
	@tput setaf 214; printf "  ░░░░▀░░ ░▄ ░▄ ░ ▒▒▒▒▒▒▒▒      |\n";
	@tput setaf 214; printf "  ░░░░░   ░░░░░░░ ▒▒▒▒▒▒▒▒      ╰┈➤Push_swap \n";
	@tput setaf 214; printf "   ░░░░░  ░ ░ ░ ░ ▒▒▒▒▒▒▒▒\n";
 
help: 
	@echo "	▂▃▅▆█▆▅▃▂ Commands ▂▃▅▆█▆▅▃▂"
	@tput setaf 014; echo "		  ► help"
	@tput setaf 014; echo "		  ► clean"
	@tput setaf 014; echo "		  ► fclean"
	@tput setaf 014; echo "		  ► re"
	@tput setaf 014; echo "		  ► author"
#	@tput setaf 009; echo "		  ► bonus "

author: 
	@tput setaf 044; echo 
	@tput setaf 044; echo "		       	       Created by Droied - Ataraxia"
	@tput setaf 222; echo "		  ══════════════════════════「₪」══════════════════════════"
	@tput setaf 044; echo "		        	https://github.com/Droied4"
	@tput setaf 044; echo 

ok:
	@tput setaf 002; echo "Ok"
.PHONY: all clean fclean re
