# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 15:51:44 by mtacunan          #+#    #+#              #
#    Updated: 2022/09/19 18:32:45 by mtacunan         ###   ########.fr        #
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

SRCS = pushswap.c \
		error.c \
		moves/moves.c \
		moves/rotate_up.c \
		moves/rotate_down.c \
		set_id.c \
		algorithym.c \
		algorithym500.c \
		 algorithym100.c \
		utils.c \
		sort_utils.c \
		size2.c \
		size3.c

NAME = push_swap
GCC   = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
OBJS = ${SRCS:.c=.o}


.c.o:
	@echo "${LBLUE}Algoritmo : ${NC}$<\c"
	@${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}
	@echo " ${GREEN}->[OK]${NC}"

${NAME} : ${OBJS}
	@make -C libft
	@${GCC} ${CFLAGS} ${OBJS} libft/libft.a -o ${NAME}
	@echo "${LGREEN} Ya funciona :D ${NC}"

all : ${NAME}

clean:
	@echo "${RED}Cleaning... ${NC}"
	@${RM} ${OBJS}

fclean:		clean
	@${RM} ${NAME}
	@make fclean -sC libft
re: fclean all

.PHONY:		all clean fclean re compile