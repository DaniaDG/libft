# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsausage <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/16 10:23:36 by bsausage          #+#    #+#              #
#    Updated: 2019/07/16 16:12:26 by bsausage         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
FLAGS = -Wall -Werror -Wextra -c -g
INCLUDES = -I$(HEADERS_DIRECTORY)
HEADERS_LIST = libft.h
HEADERS_DIRECTORY = ./
HEADERS = $(addprefix $(HEADERS_DIRECTORY), $(HEADERS_LIST))
SOURCES_DIRECTORY = ./
SOURCES_LIST = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
ft_memchr.c ft_memcmp.c	ft_strlen.c ft_strdup.c ft_strcpy.c \
ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_toupper.c ft_tolower.c \
ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
ft_lstmap.c ft_isspace.c ft_strtol.c ft_min.c ft_max.c ft_abs.c

SOURCES = $(addprefix $(SOURCES_DIRECTORY), $(SOURCES_LIST))
OBJECTS_DIRECTORY = ./
OBJECTS_LIST = $(patsubst %.c, %.o, $(SOURCES_LIST))
OBJECTS	= $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_LIST))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS_DIRECTORY)%.o : $(SOURCES_DIRECTORY)%.c $(HEADERS)
	$(CC) $(FLAGS) $(INCLUDES) $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all
