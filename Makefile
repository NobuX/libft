# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcarre </var/mail/pcarre>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/26 15:44:27 by pcarre            #+#    #+#              #
#    Updated: 2016/02/26 16:03:13 by pcarre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc -Wall -Werror -Wextra -c
LIB = ar rc libft.a
SRC = *.c
OBJ = *.o

all:
	$(GCC) $(SRC)
	$(SRC) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f libft.a

re: fclean all
