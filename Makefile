
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS = ft_lstnew.c

HEADER = libft.h

NAME = libft.a
NAME_BONUS = libft_bonus.a

OBJ_DIR = objects

OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)
OBJECTS_BONUS = $(SRC_BONUS:.c=.o)

CC = clang 

RM = rm -fr

FLAGS = -Wall -Wextra -Werror

$(OBJ_DIR)/%.o:	%.c $(HEADER)
					$(CC) -c $(FLAGS) $< -o $@

all:	$(NAME)

bonus:	$(NAME_BONUS)

$(NAME):	$(OBJ_DIR) $(OBJS) $(HEADER)
			ar -crs $(NAME) $(OBJS)
			$(RM) $(SRCS:.c=.o)

$(NAME_BONUS):	$(NAME) $(OBJ_DIR) $(HEADER) $(OBJECTS_BONUS)
				ar -crs $(NAME) $(OBJECTS_BONUS)
				cp $(NAME) $(NAME_BONUS)

$(OBJ_DIR):	
				mkdir $(OBJ_DIR)

clean:
				$(RM) $(OBJ_DIR)

fclean:			clean
				$(RM) $(NAME) $(NAME_BONUS)

re:				fclean all

.PHONY:  all clean fclean re bonus
