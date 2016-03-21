
#include "fractol.h"

int		f_mandelbrot(t_args *args, t_pos *pos, t_comp *z, t_comp *c)
{
	c->x = (((pos->x + args->x_offset) / args->zoom / WIDTH) * 4 - 2);
	c->y = (((pos->y + args->y_offset) / args->zoom / HEIGHT) * 4 - 2);
	z->x = 0.0;
	z->y = 0.0;
	return (1);
}