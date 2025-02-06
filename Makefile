# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/13 12:39:02 by glorza-p          #+#    #+#              #
#    Updated: 2025/01/30 17:00:37 by glorza-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_strlen.c ft_memset.c ft_memcpy.c ft_bzero.c ft_toupper.c \
	  ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
	  ft_memchr.c ft_memcmp.c ft_memmove.c ft_atoi.c ft_strlcpy.c \
	  ft_strlcat.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	  ft_strtrim.c ft_split.c ft_itoa.c

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

test:	all
	@rm -f test	
	cc -Wall -Werror -Wextra main.c -L. -lft -o test
	./test

nor:
	@norminette ${SRCS}
	@norminette libft.h

.PHONY: all clean fclean re
