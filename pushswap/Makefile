# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 15:51:44 by mtacunan          #+#    #+#              #
#    Updated: 2022/08/02 14:45:03 by mtacunan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = pushswap.c initialize.c moves.c
NAME = push_swap
GCC   = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
OBJS = ${SRCS:.c=.o}



.c.o:
	@${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	@make -C libft
	@${GCC} ${CFLAGS} ${OBJS} libft/libft.a -o ${NAME}

all : ${NAME}

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re: fclean all

.PHONY:		all clean fclean re compile