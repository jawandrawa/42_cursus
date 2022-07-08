# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 14:45:33 by mtacunan          #+#    #+#              #
#    Updated: 2022/07/08 17:48:45 by mtacunan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_S =  server.c

SRC_C =   client.c

UTILS = utils1.c\
		utils2.c\
		ft_printf/ft_printf.c\
		ft_printf/ft_putnbr.c
		
OBJS_S = ${SRC_S:.c=.o}
OBJS_C = ${SRC_C:.c=.o}
OBJS_U = ${UTILS:.c=.o}

SERVER = server
CLIENT = client

GCC   = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f


.c.o:
	${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

compile: ${SERVER} ${CLIENT}

${CLIENT}: ${OBJS_C} $(OBJS_U)
	${GCC} $(OBJS_C) $(OBJS_U) -o ${CLIENT}
${SERVER}:	${OBJS_S} $(OBJS_U)
	${GCC} $(OBJS_S) $(OBJS_U) -o ${SERVER}


all:	${SERVER} ${CLIENT}
clean:
	${RM} ${OBJS_S} ${OBJS_C} ${OBJS_U}

fclean:		clean
	${RM} ${SERVER} ${CLIENT}

re: fclean all

.PHONY:		all clean fclean re compile