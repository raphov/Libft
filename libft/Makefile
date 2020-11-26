# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dagurney <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/05 14:07:26 by dagurney          #+#    #+#              #
#    Updated: 2020/11/05 14:09:01 by dagurney         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	ft_atoi.c			\
				ft_isalnum.c		\
				ft_isalpha.c		\
				ft_isascii.c		\
				ft_isdigit.c		\
				ft_isprint.c		\
				ft_strlen.c			\
				ft_tolower.c		\
				ft_toupper.c		\
				ft_memset.c			\
				ft_bzero.c			\
				ft_memcpy.c			\
				ft_memccpy.c		\
				ft_memmove.c		\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_strlcpy.c		\
				ft_strlcat.c		\
				ft_strchr.c			\
				ft_strrchr.c		\
				ft_strncmp.c		\
				ft_strnstr.c		\
				ft_calloc.c			\
				ft_strdup.c			\
				ft_substr.c			\
				ft_strjoin.c		\
				ft_strtrim.c		\
				ft_split.c			\
				ft_itoa.c			\
				ft_strmapi.c		\
				ft_putchar_fd.c		\
				ft_putstr_fd.c		\
				ft_putendl_fd.c		\
				ft_putnbr_fd.c		\


OBJX		=	$(SRC:.c=.o)

INC		=	libft.h

NAME		=	libft.a

CFLAGS		=	-Werror -Wall -Wextra

ARRC		=	ar rc

$(NAME): 
	gcc -c $(SRC)
	$(ARRC) $(NAME) $(OBJX) 
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
	
re: fclean all

so: 
	gcc -c $(SRC)
	gcc -shared -o libft.so $(OBJX)

.PHONY: all clean fclean re so
