# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vatourni <vatourni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/19 22:53:32 by vatourni          #+#    #+#              #
#    Updated: 2015/03/19 22:53:36 by vatourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC += ft_bzero.s ft_strcat.s ft_isalpha.s ft_isdigit.s ft_isalnum.s ft_isascii.s
SRC += ft_isprint.s ft_toupper.s ft_tolower.s ft_puts.s ft_strlen.s ft_memset.s
SRC += ft_memcpy.s ft_strdup.s ft_cat.s ft_power.s ft_isblank.s ft_strclr.s
SRC += ft_putstr.s ft_putstr_fd.s

OBJ = $(SRC:%.s=%.o)

NAME = libfts.a

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: %.s
	@nasm -f macho64 $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

test: all
	@gcc -Wall -Werror -Wextra -c main.c
	@ld main.o libfts.a -macosx_version_min 10.10 -lSystem

re: fclean all
