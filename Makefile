
NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c 

OBJS = ${SRCS:.c=.o}

CC = clang 

RM = rm -f

FLAGS = -Wall -Wextra -Werror 


all:	${NAME}

${NAME}: ${OBJS}
		 ar rcs ${NAME} ${OBJS} 
${OBJS}: ${SRCS}
		${CC} ${FLAGS} ${SRCS} -c

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:  all clean fclean re
