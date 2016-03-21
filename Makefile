# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/23 13:02:44 by jrouzier          #+#    #+#              #
#    Updated: 2016/03/21 11:22:08 by jrouzier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
SRC_NAME = main.c \
		   fractol.c \
		   display.c \
		   error.c \
		   hooks.c \
		   mousebutton_hook.c \
		   exit_fol.c \
		   putpxl_img.c \
		   getcolor.c \
		   get_iteration.c \
		   fill_image.c \
		   f_douady.c \
		   f_julia.c \
		   f_mandelbrot.c

LDFLAGS = -Llibft -Lmlx -L/usr/X11R6/lib
LDLIBS = -lft -lmlx -lX11 -framework OpenGL -framework AppKit

CC = clang
CFLAG = -Werror -Wall -Wextra
SRC_PATH = src
CPPFLAGS = -I./includes -I./libft/includes -I/usr/X11R6/include
OBJ_PATH = obj

OBJ_NAME = $(SRC_NAME:.c=.o)
	SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
	OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	make -C mlx/
	$(CC) $(LDFLAGS) $(LDLIBS) $^ -o $@

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	make -C mlx/ clean
	make -C libft/ clean

fclean: clean
	rm -fv $(NAME)
	make -C libft/ fclean

re: fclean all

norme:
	norminette $(SRC)
	norminette includes/*.h
