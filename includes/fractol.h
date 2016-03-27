/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 20:30:49 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 11:17:14 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# include "libft.h"

/*
** Static values
*/
# define ZOOM 1.1
# define WIN_MAX_WIDTH 2560
# define WIN_MAX_HEIGHT 1440
# define WIN_MIN_WIDTH 20
# define WIN_MIN_HEIGHT 20
# define ITE_MIN 1

/*
** Numeric keypad
*/
# define NUM_1 83
# define NUM_2 84
# define NUM_3 85
# define NUM_4 86
# define NUM_5 87
# define NUM_PLUS 69
# define NUM_MINUS 78
# define NUM_MULT 67
# define NUM_DIV 75

/*
** Misc keys
*/
# define ECHAP 53

/*
** Alphabet keys
*/
# define KEY_R 15
# define KEY_L 37
# define KEY_T 17
# define KEY_V 9
# define KEY_F 3
# define KEY_G 5

/*
** Arrows
*/
# define KEY_UP 126
# define KEY_DOWN 125
# define KEY_LEFT 123
# define KEY_RIGHT 124

typedef struct		s_window
{
	void			*mlx;
	void			*window;
	void			*img;
	void			*args;
	char			*idata;
	int				ibits;
	int				ilinesize;
	int				iendian;
	t_pos			*size;
	int				type;
	float			zoom;
	t_pos			*offset;
	t_pos			*mouse_cursor;
	int				it;
	int				lock_mouse;
	int				show_menu;
	int				tech_menu;
	int				color;
}					t_window;

typedef struct		s_args
{
	void			*mlx;
	t_list			*w_list;
	int				pwait;
	int				debug_level;
	t_window		*tmp_window;
}					t_args;

typedef struct		s_comp
{
	float			x;
	float			y;
}					t_comp;

int					fractol(t_args *args);
void				fol_putusage(char *s);
int					fol_show_help(t_args *args);

/*
** Argument parsing and window initialization
*/
t_args				*fol_arg_parser(int nb_params, char **params);
int					fol_read_argument(char *a, t_args *args);
t_args				*fol_init_args();

/*
** Window management
*/
void				fol_create_mlx_window(t_window *window);
t_window			*fol_init_window(t_args *args);
int					fol_reset_window(t_window *window);
int					fol_add_window_to_list(t_args *args);
void				fol_redraw_window(t_window *window);

/*
** Argument list
*/
int					arg_window_height(char *p, t_args *args);
int					arg_window_width(char *p, t_args *args);
int					arg_iterations(char *p, t_args *args);
int					arg_zoom(char *p, t_args *args);
int					arg_xoff(char *p, t_args *args);
int					arg_yoff(char *p, t_args *args);
int					arg_color(char *p, t_args *args);

/*
** MLX hooks
*/
int					fol_init_hooks(t_window *window);
int					fol_key_hook(int keycode, t_window *window);
int					fol_mousebutton_hook(int button, int x, int y,
	t_window *window);
int					fol_mousecursor_hook(int x, int y, t_window *window);
int					fol_expose_hook(t_window *window);

/*
** Hooks functions
*/
int					hook_window_size_modify(t_window *window, int direction);
int					hook_iteration_modify(t_window *window, int keycode);

/*
** Display functions
*/
void				fol_display(t_window *window);
void				fol_reset_display(t_window *window);
void				fol_putpxl_img(t_window *window, t_pos *pos, int color);
int					fol_getcolor(t_window *window, t_pos *pos);
int					fol_get_iteration(t_window *window, t_pos *pos);
void				fol_fill_image(t_window *window);

/*
** Base Fractals
** These functions are used by fol_get_iteration to fill base fractals
** parameters
*/
int					f_julia(t_window *window, t_pos *pos);
int					f_smile(t_window *window, t_pos *pos);
int					f_poulpe(t_window *window, t_pos *pos);
int					f_mandelbrot(t_window *window, t_pos *pos);
int					f_douady(t_window *window, t_pos *pos);
int					f_sierpinski_carpet(t_window *window, t_pos *pos);
int					f_dragon(t_window *window, t_pos *pos);
int					f_oil(t_window *window, t_pos *pos);

/*
** Zoom in/out
*/
void				fol_zoom_in(t_window *window, t_pos *pos);
void				fol_zoom_out(t_window *window, t_pos *pos);

/*
** Program management functions
*/
void				throw_error(char *s);
void				exit_fol(t_args *args);

#endif
