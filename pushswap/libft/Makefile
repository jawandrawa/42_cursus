# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 17:10:16 by mtacunan          #+#    #+#              #
#    Updated: 2022/09/19 17:20:55 by mtacunan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NC				=	\033[0m
RED				=	\033[0;31m
GREEN			=	\033[0;32m
LRED			=	\033[1;31m
LGREEN			=	\033[1;32m
YELLOW			=	\033[1;33m
LBLUE			=	\033[1;34m
TITLE			=	\033[38;5;33m

NAME	=		libft.a

SRCS	=		ft_memset.c \
				ft_strlen.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_atoi.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_itoa.c \
				ft_strtrim.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_split.c \
				ft_lstnew_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \

SRCH	=		libft.h

OBJS	=		$(SRCS:.c=.o)

OBJB	=		$(SRCBONUS:.c=.o)

CC		=		gcc

RM		=		rm -f

AR		=		ar rcs

CFLAGS	=		-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(SRCH)
	@$(AR) $(NAME) $(OBJS)

clean:
	${RM} ${OBJS} ${OBJB}

fclean: clean
	${RM} ${NAME}

bonus: $(OBJB) $(SRCH)
	$(AR) $(NAME) $(OBJB)

re: fclean all

rebonus: fclean bonus

%.o: %.c
	@echo "${YELLOW}Compilando ${NC}$<\c"
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
	@echo " ${GREEN}->[OK]${NC}"

.PHONY: all clean fclean bonus re rebonus so

