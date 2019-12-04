# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/11 13:29:38 by yictseng     #+#   ##    ##    #+#        #
#    Updated: 2019/10/31 15:22:31 by yictseng    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME		= libft.a

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
			  ft_free_tab.c\

SRCSB		= ft_lstlast_bonus.c\
			  ft_lstnew_bonus.c\
			  ft_lstadd_front_bonus.c\
			  ft_lstadd_back_bonus.c\
			  ft_lstclear_bonus.c\
			  ft_lstdelone_bonus.c\
			  ft_lstsize_bonus.c\
			  ft_lstiter_bonus.c\
			  ft_lstmap_bonus.c\

OBJSB		= ${SRCSB:.c=.o}

OBJS		= ${SRCS:.c=.o}

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror 

all			: $(NAME)

$(NAME)		: $(OBJS)
			  ar rc $(NAME) $(OBJS)
			  ranlib $(NAME)

bonus		: $(OBJS) $(OBJSB)
			  ar rc $(NAME) $(OBJS) $(OBJSB)
			  ranlib $(NAME)

%.o			: %.c $(HEADER)
			  ${CC} ${CFLAGS} -c $< -I ${HEADER}

clean		:
			  ${RM} $(OBJS) $(OBJSB)

fclean		: clean
			  ${RM} $(NAME)

re			: fclean all

.PHONY		: all clean fclean re
