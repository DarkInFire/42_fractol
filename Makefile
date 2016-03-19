# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/23 13:02:44 by jrouzier          #+#    #+#              #
#    Updated: 2016/03/19 17:41:38 by jrouzier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
SRC_NAME = main.c

LDFLAGS = -Llibft -Lminilibx_macos
LDLIBS = -lft -lmlx -framework OpenGL -framework AppKit

CC = clang
CFLAG = -Werror -Wall -Wextra
SRC_PATH = src
CPPFLAGS = -I./includes -I./libft/includes
OBJ_PATH = obj

OBJ_NAME = $(SRC_NAME:.c=.o)
	SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
	OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	make -C minilibx_macos/
	$(CC) $(LDFLAGS) $(LDLIBS) $^ -o $@

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
