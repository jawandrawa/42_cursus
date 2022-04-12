 # **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 18:41:30 by mtacunan          #+#    #+#              #
#    Updated: 2021/11/13 13:39:19 by mtacunan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c \
				ft_hex_may.c \
				ft_hex_min.c \
				ft_put_address.c \
				ft_putchar.c \
				ft_putnbr_u.c \
				ft_putnbr.c \
				ft_putstr.c

SRCH	=		ft_printf.h

OBJS	=		$(SRCS:.c=.o)

CC		=		gcc

RM		=		rm -f

AR		=		ar rcs

CFLAGS	=		-Wall -Werror -Wextra

NAME	=		libftprintf.a


all: $(NAME)

$(NAME): $(OBJS) $(SRCH)
	$(AR) $(NAME) $(OBJS)

clean:
	${RM} ${OBJS} ${OBJB}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean bonus re rebonus