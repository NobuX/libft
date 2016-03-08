# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/26 15:44:27 by pcarre            #+#    #+#              #
#    Updated: 2016/03/08 16:33:00 by pcarre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc -Wall -Werror -Wextra -c
LIB = ar rc libft.a
SRC = *.c
OBJ = *.o

all:
	$(GCC) $(SRC)
	$(LIB) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f libft.a

re: fclean all
