CFLAGS	= -Wall -Wextra -Werror

NAME	= rush-02

SRCS	= ${wildcard *.c}

OBJS	= ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
