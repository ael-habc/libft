# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-habc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/30 15:41:39 by ael-habc          #+#    #+#              #
#    Updated: 2019/04/14 15:15:17 by ael-habc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      = gcc -Wall -Wextra -Werror
AR      = ar rc
RANLIB  = ranlib

NAME    = libft.a
HEAD    = libft.h
SRCS    = *.c 

OBJS    = *.o

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME):
	@$(CC) -c $(SRCS)
	@$(AR) $(NAME) $(OBJS)
	@$(RANLIB) $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:     fclean all
