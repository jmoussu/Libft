# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 11:30:35 by jmoussu           #+#    #+#              #
#    Updated: 2018/12/08 14:53:48 by jmoussu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_strlen.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_strdup.c \
		ft_strdupfree.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_memset.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strjoinfree.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_putendl.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstendadd.c \
		ft_lstprintstr.c \
		ft_displaytab.c \
		ft_displayargv.c \
		ft_strrealloc.c \
		ft_sqrt.c

OBJ = $(SRC:.c=.o)

INC = .
CFLAGS = -Wall -Werror -Wextra -I$(INC)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo done

%.o : %.c
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -rf $(NAME) a.out a.out.dSYM

re: fclean all
# gccw -L. -lft ft_strcat.c

.PHONY: all clean fclean re
