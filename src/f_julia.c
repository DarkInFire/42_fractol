
#include "fractol.h"

int		f_julia(t_args *args, t_pos *pos, t_comp *z, t_comp *c)
{
	z->x = (((pos->x + args->x_offset) / args->zoom / WIDTH) * 4 - 2);
	z->y = (((pos->y + args->y_offset) / args->zoom / HEIGHT) * 4 - 2);
	c->x = args->jx;
	c->y = args->jy;
	return (1);
}
