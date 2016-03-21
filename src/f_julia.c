
#include "fractol.h"

int		f_julia(t_args *args, t_pos *pos, t_comp *z, t_comp *c)
{
	z->x = (((pos->x + args->x_offset) / args->zoom / WIDTH) * 4 - 2);
	z->y = (((pos->y + args->y_offset) / args->zoom / HEIGHT) * 4 - 2);
	c->x = ((double)args->mouse_cursor->x / (double)WIDTH) * 2.0 - 1.0;
	c->y = ((double)args->mouse_cursor->y / (double)HEIGHT) * 2.0 - 1.0;
	return (1);
}
