# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 15:51:44 by mtacunan          #+#    #+#              #
#    Updated: 2022/07/08 17:00:26 by mtacunan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = pushswap.c
NAME = pushswap
GCC   = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
OBJS = ${SRCS:.c=.o}
.c.o:
	${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	${GCC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re: fclean all

.PHONY:		all clean fclean re compile