# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/11 13:29:38 by yictseng     #+#   ##    ##    #+#        #
#    Updated: 2019/10/14 15:49:57 by yictseng    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME		= libft

EX			= .a

HEADER 		= libft.h

SRCS		= ft_atoi.c\
			  ft_bzero.c\
			  ft_isalnum.c\
			  ft_isalpha.c\
			  ft_isascii.c\
			  ft_isdigit.c\
			  ft_isprint.c\
			  ft_memcpy.c\
			  ft_memset.c\
			  ft_memchr.c\
			  ft_strlen.c\
			  ft_strncmp.c\
			  ft_tolower.c\
			  ft_toupper.c\

OBJS		= ${SRCS:.c=.o}

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -I ${HEADER}

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			ar rc ${NAME}${EX} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}${EX}

re:			fclean all

.PHONY:		all clean fclean re
