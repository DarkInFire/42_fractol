# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/23 13:02:44 by jrouzier          #+#    #+#              #
#    Updated: 2016/03/28 15:43:49 by jrouzier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
SRC_NAME = main.c \
		   fractol.c \
		   display.c \
		   error.c \
		   exit_fol.c \
		   putpxl_img.c \
		   getcolor.c \
		   get_iteration.c \
		   fill_image.c \
		   is_movable.c \
		   f_douady.c \
		   f_julia.c \
		   f_mandelbrot.c \
		   f_sierpinski_carpet.c \
		   f_eye.c \
		   f_oil.c \
		   f_poulpe.c \
		   f_smile.c \
		   zoom_in.c \
		   zoom_out.c \
		   init_hooks.c \
		   expose_hook.c \
		   key_hook.c \
		   mousebutton_hook.c \
		   mousecursor_hook.c \
		   arg_parser.c \
		   init_args.c \
		   init_window.c \
		   reset_window.c \
		   add_window_to_list.c \
		   show_help.c \
		   read_argument.c \
		   redraw_window.c \
		   create_mlx_window.c \
		   arg_window_height.c \
		   arg_window_width.c \
		   arg_iterations.c \
		   arg_zoom.c \
		   arg_xoff.c \
		   arg_yoff.c \
		   arg_color.c \
		   hook_window_size_modify.c \
		   hook_iteration_modify.c

LDFLAGS = -Llibft/ -Lmlx/ -L/usr/X11R6/lib
LDLIBS = -lft -lmlx -lm -lX11
LDLIBS += -framework AppKit -framework OpenGL

CC = clang
CFLAGS = -Werror -Wall -Wextra -O3
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
	$(CC) $^ -o $@ $(LDFLAGS) $(LDLIBS)

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
	make -C libft/ norme
	norminette $(SRC)
	norminette includes/*.h
