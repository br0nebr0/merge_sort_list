# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ction <ction@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/10 14:36:24 by ction             #+#    #+#              #
#    Updated: 2019/06/10 17:24:23 by waeron-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = merge_sort
SRC = main.c list_func.c merge_sort.c
OBJ = $(SRC:.c=.o)
LIBFT = libft/libft.a

all: $(NAME)
$(OBJ): %.o: %.c
		@gcc -c -g -I./libft/includes $< -o $@

$(LIBFT):
	@make -C libft

$(NAME): $(LIBFT) $(OBJ)
	@gcc $(OBJ) $(LIBFT) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)
	@make -C libft clean

fclean: clean
	/bin/rm -f $(NAME)
	@make -C libft fclean

re: fclean all
