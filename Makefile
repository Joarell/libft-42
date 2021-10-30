# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 17:46:20 by Jev               #+#    #+#              #
#    Updated: 2021/10/30 17:46:27 by Jev              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c

NAME = libft.a
NAME_BONUS = libft.a

COMPILAION = .

OBJS = $(SRCS:%.c=%.o)
OBJECTS_BONUS = $(SRCS_BONUS:%.c=%.o)

CC = clang 

RM = rm -f

FLAGS = -Wall -Wextra -Werror

$(COMPILAION)/%.o:	%.c 
					$(CC) -c $(FLAGS) $^ -o $@

all:	$(NAME)

bonus:	$(COMPILAION) $(OBJS) $(OBJECTS_BONUS)
		ar -crs $(NAME) $(OBJS) $(OBJECTS_BONUS)

$(NAME):	$(COMPILAION) $(OBJS)
			ar -crs $(NAME) $(OBJS)

clean:		
			$(RM) $(OBJS) $(OBJECTS_BONUS)

fclean:		clean
			$(RM) $(NAME) $(bonus)

re:			fclean all

.PHONY:  all clean fclean re bonus
