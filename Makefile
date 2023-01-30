# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 04:12:12 by sshimizu          #+#    #+#              #
#    Updated: 2023/01/31 04:26:36 by sshimizu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c format.c format2.c
OBJS = $(SRCS:.c=.o)
LIB = libft/
LIBFT = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rs

all: $(NAME)

$(NAME): $(OBJS)
	make bonus -C $(LIB)
	cp $(LIB)$(LIBFT) .
	mv $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	make fclean -C $(LIB)
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

bonus: all

.PHONY: all clean fclean re bonus
