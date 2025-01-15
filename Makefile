# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/13 12:39:02 by glorza-p          #+#    #+#              #
#    Updated: 2025/01/15 13:34:09 by glorza-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_strlen.c ft_memset.c ft_bzero.c ft_toupper.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= cc

CFLAGS	= -Wall -Werror -Wextra -I.

AR	= ar -rc
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} Makefile libft.h
		${AR} ${NAME} ${OBJS}

all:	${NAME}

clean:
	rm -f ${OBJS}
	rm -f test

fclean:	clean
	rm -f $(NAME)

re:	fclean all

tclean:
	rm -f test

test:	all	
	cc -Wall -Werror -Wextra main.c -L. -lft -o test

.PHONY: all clean fclean re
