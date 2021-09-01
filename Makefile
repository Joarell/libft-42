.PHONY:  all clean fclean re

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c

OBJS = ${SRCS:.c=.o}

CC = clang 

RM = rm -f

FLAGS = -Wall -Wextra -Werror 


all:	${NAME}

${NAME}: ${OBJS}
		ar -crs ${NAME} ${OBJS} 

${OBJS}: ${SRCS}
		 ${CC} ${FLAGS} -c ${SRCS} 
clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
