# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 15:51:44 by mtacunan          #+#    #+#              #
#    Updated: 2022/08/23 14:07:57 by mtacunan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = pushswap.c \
		error.c \
		moves/moves.c \
		moves/rotate_up.c \
		moves/rotate_down.c \
		set_id.c \
		algorithym.c \
		utils.c \
		size2.c
NAME = push_swap
GCC   = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
OBJS = ${SRCS:.c=.o}


.c.o:
	@${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}  ${LIBFT}
	make -C libft
	@${GCC} ${CFLAGS} ${OBJS} libft/libft.a -o ${NAME}

all : ${NAME}

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}
	make fclean -sC libft
re: fclean all

.PHONY:		all clean fclean re compile
