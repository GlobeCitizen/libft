# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahnich <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/15 22:48:45 by mahnich           #+#    #+#              #
#    Updated: 2019/11/29 04:39:15 by mahnich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

SRC = ft_isdigit.c ft_memmove.c	ft_split.c	ft_strmapi.c ft_toupper.c \
ft_atoi.c ft_isprint.c ft_memset.c ft_strchr.c	ft_strncmp.c \
ft_bzero.c ft_itoa.c ft_strdup.c	ft_strnstr.c ft_calloc.c \
ft_memccpy.c ft_putchar_fd.c ft_strjoin.c ft_strrchr.c ft_isalnum.c \
ft_memchr.c ft_putendl_fd.c ft_strlcat.c ft_strtrim.c ft_isalpha.c \
ft_memcmp.c ft_putnbr_fd.c	ft_strlcpy.c ft_substr.c ft_isascii.c \
ft_memcpy.c ft_putstr_fd.c ft_strlen.c ft_tolower.c

OBJ = $(SRC:.c=.o)

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ_BONUS = $(SRC_BONUS:%.c=%.o)

all: $(NAME)

$(OBJ) :
	$(CC) $(CCFLAGS) -c $(SRC)

$(OBJ_BONUS) :
	$(CC) $(CCFLAGS) -c $(SRC) $(SRC_BONUS)

bonus: $(OBJ_BONUS)
	ar cr $(NAME) $(OBJ) $(OBJ_BONUS)
	ranlib $(NAME)

$(NAME): $(OBJ) $(OBJ_BONUS)
	ar cr $(NAME) $(OBJ) $(OBJ_BONUS)
	ranlib $(NAME)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all
