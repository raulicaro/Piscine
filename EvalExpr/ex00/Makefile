# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlima <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/10 20:57:53 by rlima             #+#    #+#              #
#    Updated: 2018/11/10 21:54:33 by rlima            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

OUT = eval_expr

all: $(OUT)

$(OUT):
	gcc -c -Wall -Wextra -Werror main.c srcs/*.c
	gcc -o $(NAME) -Wall -Wextra -Werror *.o
clean:
	/bin/rm -f *.o
fclean:clean
	/bin/rm -f $(OUT)
re: fclean all
