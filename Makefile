# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjobert <rjobert@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 14:23:19 by rjobert           #+#    #+#              #
#    Updated: 2023/05/18 18:16:54 by rjobert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)
NAME = libftprintf.a
LIB_PATH = ./libft 
LIBFT = $(LIB_PATH)/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIB_PATH) all 

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@  


fclean: clean
	make -C $(LIB_PATH) fclean
	rm -rf $(NAME)	

clean:
	rm -f $(OBJS)
	make -C $(LIB_PATH) clean

re: fclean all

.PHONY: all clean fclean re
