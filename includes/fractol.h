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
# define HEIGHT 1000
# define WIDTH 1000
# define ZOOM 1.1
# include "libft.h"

typedef struct		s_window
{
	struct s_args	*args;
	void			*window;
	void			*img;
	char			*idata;
	int				ibits;
	int				ilinesize;
	int				iendian;
	int				type;
	float			zoom;
	t_pos			*offset;
	int				it;
	int				lock_mouse;
}					t_window;

typedef struct		s_args
{
	void			*mlx;
	t_pos			*mouse_cursor;
	t_window		*window;
}					t_args;

typedef struct		s_comp
{
	float			x;
	float			y;
}					t_comp;

int					fractol(char *type);
void				fol_display(t_window *window);
void				fol_putusage(char *s);

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
