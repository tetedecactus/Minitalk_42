# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 10:24:49 by olabrecq          #+#    #+#              #
#    Updated: 2021/08/24 14:24:31 by olabrecq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_CLIENT = client
NAME_SERVER = server

SRCS_CLIENT = ./srcs/client.c \
			./srcs/outils.c \
			
SRCS_SERVER = ./srcs/server.c \
			./srcs/outils.c \
			
OBJS_CLIENT = ${SRCS_CLIENT:.c=.o}

OBJS_SERVER = ${SRCS_SERVER:.c=.o}

HEADER	= ./includes/minitalk.h 

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror

.c.o:
					${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o} 
					
all: 	${NAME_CLIENT} ${NAME_SERVER}
$(NAME_CLIENT):	${OBJS_CLIENT}
$(NAME_SERVER): ${OBJS_SERVER}
			${CC} ${CFLAGS} ${SRCS_CLIENT} -o ${NAME_CLIENT}
			${CC} ${CFLAGS} ${SRCS_SERVER} -o ${NAME_SERVER}
clean:
					rm -f ${OBJS_CLIENT} ${OBJS_SERVER}
					
fclean: 	clean
					rm -f $(NAME_CLIENT) $(NAME_SERVER)
					
re:			fclean all 

.PHONY: all clean fclean re
