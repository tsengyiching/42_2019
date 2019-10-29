# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/11 13:29:38 by yictseng     #+#   ##    ##    #+#        #
#    Updated: 2019/10/22 16:32:51 by yictseng    ###    #+. /#+    ###.fr      #
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
			  ft_memccpy.c\
			  ft_memmove.c\
			  ft_memcmp.c\
			  ft_memset.c\
			  ft_memchr.c\
			  ft_strlen.c\
			  ft_strlcpy.c\
			  ft_strlcat.c\
			  ft_strncmp.c\
			  ft_strchr.c\
			  ft_strrchr.c\
			  ft_strnstr.c\
			  ft_tolower.c\
			  ft_toupper.c\
			  ft_strdup.c\
			  ft_calloc.c\
			  ft_substr.c\
			  ft_strjoin.c\
			  ft_strtrim.c\
			  ft_putchar_fd.c\
			  ft_putstr_fd.c\
			  ft_putendl_fd.c\
			  ft_putnbr_fd.c\
			  ft_split.c\
			  ft_strmapi.c\
			  ft_itoa.c\

SRCSB		= ft_lstlast_bonus.c\
			  ft_lstnew_bonus.c\
			  ft_lstadd_front_bonus.c\
			  ft_lstadd_back_bonus.c\
			  ft_lstclear_bonus.c\
			  ft_lstdelone_bonus.c\
			  ft_lstsize_bonus.c\
			  ft_lstiter_bonus.c\
			  ft_lstmap_bonus.c\

OBJS		= ${SRCS:.c=.o}

OBJSB		= ${SRCSB:.c=.o}

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -I ${HEADER}

all:		${NAME} bonus

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:%.c=%.o}

$(NAME):	$(OBJS)
			ar rc $(NAME)$(EX) $(OBJS)
			ranlib ${NAME}$(EX)

bonus:		$(OBJS) $(OBJSB)
			ar rc $(NAME)$(EX) $(OBJS) $(OBJSB)
			ranlib $(NAME)$(EX)

clean:
			${RM} $(OBJS) $(OBJSB)

fclean:		clean
			${RM} $(NAME)$(EX)

re:			fclean all

.PHONY:		all clean fclean re
