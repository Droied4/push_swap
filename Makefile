# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: deordone <deordone@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 11:18:16 by deordone          #+#    #+#              #
#    Updated: 2023/11/21 18:08:13 by deordone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
SOURCES = \
	 push_swap.c ft_checker.c\

INClUDE = -I
HEADER = push_swap.h

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs

all: author $(NAME)

$(NAME): $(OBJECTS)
		$(AR) $(NAME) $(OBJECTS)
%.o: %.c $(HEADER) Makefile
		$(CC) $(CFLAGS) $(INCLUDE)$(HEADER) -c $< -o $@
	
clean: author
	rm -f $(OBJECTS)

fclean : author clean
		rm -rf $(NAME)

re: fclean all 

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
	@tput setaf 044; echo "		       	   Created by Droied - Master of Lists"
	@tput setaf 222; echo "		  ══════════════════════════「₪」══════════════════════════"
	@tput setaf 044; echo "				https://github.com/Droied4"
	@tput setaf 044; echo 
.PHONY: all clean fclean re
