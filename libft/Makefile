# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/06 19:23:02 by jrouzier          #+#    #+#              #
#    Updated: 2016/03/15 12:40:23 by jrouzier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_NAME = ft_memchr.c ft_putstr.c ft_strjoin.c ft_strsplit.c ft_memcmp.c \
	ft_putstr_fd.c ft_strlcat.c ft_strstr.c ft_atoi.c ft_memcpy.c ft_strcat.c \
	ft_strlen.c ft_strsub.c ft_bzero.c ft_memdel.c ft_strchr.c ft_strmap.c \
	ft_strtrim.c ft_isalnum.c ft_memmove.c ft_strclr.c ft_strmapi.c \
	ft_tolower.c ft_isalpha.c ft_memset.c ft_strcmp.c ft_strncat.c \
	ft_toupper.c ft_isascii.c ft_putchar.c ft_strcpy.c ft_strncmp.c \
	ft_isdigit.c ft_putchar_fd.c ft_strdel.c ft_strncpy.c ft_isprint.c \
	ft_putendl.c ft_strdup.c ft_strnequ.c ft_itoa.c ft_putendl_fd.c \
	ft_strequ.c ft_strnew.c ft_memalloc.c ft_putnbr.c ft_striter.c \
	ft_strnstr.c ft_memccpy.c ft_putnbr_fd.c ft_striteri.c ft_strrchr.c \
	ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
	ft_lstmap.c \
	ft_filecpy.c ft_strmerge.c ft_strndup.c ft_swapptr.c ft_srttab.c \
	ft_swapint.c ft_getpos.c ft_lstaddlast.c ft_lstcount.c ft_highsqrt.c \
	ft_gnl.c ft_putnstr.c ft_putnstr_fd.c ft_max.c ft_putnbrbase_fd.c \
	ft_itoa_base.c ft_putnbrbase.c ft_nstrlen.c ft_putwstr.c ft_putwstr_fd.c \
	ft_putwchar.c ft_putwchar_fd.c ft_putnwstr.c ft_lstaddnlast.c ft_abs.c \
	ft_printtab.c ft_setpos.c

CC = clang
CFLAGS = -Werror -Wall -Wextra
SRC_PATH = src
CPPFLAGS = -I./includes
OBJ_PATH = obj

OBJ_NAME = $(SRC_NAME:.c=.o)
SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $^

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	rm -fv $(NAME)

re: fclean all

norme:
	norminette $(SRC)
	norminette includes/*.h
