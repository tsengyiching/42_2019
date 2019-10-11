# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/11 13:29:38 by yictseng     #+#   ##    ##    #+#        #
#    Updated: 2019/10/11 14:32:22 by yictseng    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

Name		= libft.a

HEADER 		= libft.h

SRCS		= srcs/ft_atoi.c\
			  srcs/ft_bzero.c\
			  srcs/ft_isalnum.c\
			  srcs/ft_isalpha.c\
			  srcs/ft_isascii.c\
			  srcs/ft_digit.c\
			  srcs/ft_isprint.c\
			  srcs/ft_memcpy.c\
			  srcs/ft_memccpy.c\
			  srcs/ft_strlen.c\
			  srcs/ft_strncmp.c\
			  srcs/ft_tolower.c\
			  srcs/ft_toupper.c\

OBJS		= ${SRCS:.c=.o}

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -I ${HEADER}

all:		${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
