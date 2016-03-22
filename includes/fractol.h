/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 20:30:49 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/20 17:03:37 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# define ZOOM 1.1
# include "libft.h"

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
}					t_window;

typedef struct		s_args
{
	void			*mlx;
	t_list			*w_list;
	int 			pwait;
	t_window		*tmp_window;
}					t_args;

typedef struct		s_comp
{
	float			x;
	float			y;
}					t_comp;

int					fractol(t_args *args);
void				fol_putusage(char *s);

/*
** Argument parsing and widow initialization
*/
t_args				*fol_arg_parser(int nb_params, char **params);
int 				fol_read_argument(char *a, t_args *args);
t_args				*fol_init_args();
t_window			*fol_init_window(t_args *args);
int					fol_add_window_to_list(t_args *args);

/*
** Argument list
*/
int					arg_window_height(char *p, t_args *args);
int					arg_window_width(char *p, t_args *args);
int					arg_iterations(char *p, t_args *args);

/*
** Hooks functions
*/
int					fol_init_hooks(t_window *window);
int					fol_key_hook(int keycode, t_window *window);
int					fol_mousebutton_hook(int button, int x, int y,
	t_window *window);
int					fol_mousecursor_hook(int x, int y, t_window *window);
int					fol_expose_hook(t_window *window);

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
int					f_julia(t_window *window, t_pos *pos, t_comp *z,
	t_comp *x);
int					f_mandelbrot(t_window *window, t_pos *pos, t_comp *z,
	t_comp *x);
int					f_douady(t_window *window, t_pos *pos, t_comp *z,
	t_comp *x);

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
