# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 11:40:14 by dajeon            #+#    #+#              #
#    Updated: 2023/01/06 14:57:41 by dajeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AR = ar
CC = cc
RM = rm
CFLAGS = -Wall -Werror -Wextra 
CFLAGS_AR = -Llibft -lft
RMFLAGS = -rf
ARFLAGS = cr

SRCS = ft_main.c \
	   ft_putnbr_base.c ft_putnbr_base_u.c ft_putstr.c \
	   ft_putchar.c ft_abs.c 

SRC_H = ft_printf.h

OBJS = $(SRCS:.c=.o)

NAME = test.out

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARLAGS) $(OBJS) $(CFLAGS_AR) -o $(NAME)

clean :
	$(RM) $(RMFLAGS) $(OBJS)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re bonus
