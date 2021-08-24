NAME_CLIENT = /srcs/client.a
NAME_SERVER = /srcs/server.a

SRCS = /srcs/client.c \
		/srcs/outils.c \
		/srcs/server.c \

OBJS 	= ${SRCS:.c=.o}

HEADER	= /includes/minitalk.h

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror

.c.o:
					${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o} 

all: 		${NAME_CLIENT} ${NAME_SERVER}

$(NAME):	${OBJS}
					ar rc ${NAME} ${OBJS}
bonus: 		${BONUS_OBJS}
					ar rc ${NAME} ${BONUS_OBJS}
clean:
					rm -f ${OBJS}

bonus_clean: 
					rm -f ${BONUS_OBJS}

fclean: 	clean
					rm -f $(NAME)
re:			fclean all 

.PHONY: all clean fclean re