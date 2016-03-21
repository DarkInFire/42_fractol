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

typedef struct	s_args
{
	void		*mlx;
	void		*window;
	void		*img;
	char		*idata;
	int			ibits;
	int			ilinesize;
	int			iendian;
	int			type;
	float		zoom;
	int			x_offset;
	int			y_offset;
	double		jx;
	double		jy;
	int			it;
	int			lock_mouse;
}				t_args;

typedef struct	s_comp
{
	float		x;
	float		y;
}				t_comp;

int				fractol(char *type);
void			fol_display(t_args *args);
void			fol_putusage(char *s);
int				fol_key_hook(int keycode, t_args *args);
int				fol_mousebutton_hook(int button, int x, int y, t_args *args);
int				fol_mousecursor_hook(int x, int y, t_args *args);
int				fol_expose_hook(t_args *args);
void			fol_reset_display(t_args *args);
void			fol_putpxl_img(t_args *args, int x, int y, int color);
int				fol_getcolor(t_args *args, int x, int y);
int				fol_get_iteration(t_args *args, int x, int y);
void			fol_fill_image(t_args *args);
void			throw_error(char *s);
void			exit_fol(t_args *args);

#endif
