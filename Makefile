# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wvon-gra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/30 10:11:48 by wvon-gra          #+#    #+#              #
#    Updated: 2017/06/06 14:56:04 by wvon-gra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

HEADER = libft.h

SRC = 	ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
		ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c \
		ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \

OBJ =  ft_memset.o ft_bzero.o ft_memcpy.o \
	   ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o \
	   ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o \
	   ft_strcmp.o ft_strncmp.o ft_atoi.o ft_isalpha.o ft_isdigit.o \
	   ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o \

all: $(NAME)
	
$(NAME): 
	gcc $(CFLAGS) -c -I $(HEADER) $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
