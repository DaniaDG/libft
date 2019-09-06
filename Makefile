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

M_FLAG = -Wextra -Werror -Wall

O_FLAG = -c -I

CFILES = *.c

OFILES = *.o

all: $(NAME)

$(NAME):
	gcc $(O_FLAG) $(M_FLAG) $(CFILES)
	ar rc $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
