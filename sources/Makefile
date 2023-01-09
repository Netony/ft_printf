# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 14:23:34 by dajeon            #+#    #+#              #
#    Updated: 2023/01/09 14:53:43 by dajeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
RM = rm

CFLAGS = -Wall -Wextra -Werror -I ../includes
RMFLAGS = -rf

SRCS = ft_putnbr_base.c ft_putnbr_base_u.c ft_putnbr_base_lu.c\
	   ft_putstr.c ft_putchar.c ft_abs.c ft_printf.c

OBJS = $(SRCS:.c=.o)

NAME = a.out

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean :
	$(RM) $(RMFLAGS) $(OBJS)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re bonus
