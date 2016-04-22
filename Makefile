# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/26 15:44:27 by pcarre            #+#    #+#              #
#    Updated: 2016/04/22 19:53:02 by pcarre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
GCC = gcc -Wall -Werror -Wextra -c
LIB = ar rc libft.a
SRC = *.c
OBJ = *.o

ifdef ($(ALL))
endif

all: fclean $(NAME)

$(NAME):
	$(GCC) $(SRC)
	$(LIB) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f libft.a

re: fclean all
