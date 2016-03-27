#include "fractol.h"
#include <math.h>

static int	calc_it(t_window *window, t_complex *z, t_complex *c)
{
	int			i;
	double		x;
	double 		s;
	double 		d;
	double 		u;

	i = -1;
	while (++i < window->it && (z->x * z->x + z->y * z->y) < 4)
	{
		x = z->x;
		z->x = x * x * x - 3 * x * z->y * z->y;
		z->y = 3 * x * x * z->y - z->y * z->y * z->y;
		s = sin(z->y);
		d = cos(z->y);
  		u = exp(z->x);
  		z->x = u * d + c->x;
  		z->y = u * s + c->y;
	}
	return (i);
}

int		f_poulpe(t_window *window, t_pos *pos)
{
	t_complex	z;
	t_complex	c;

	z.x = -0.621 +
		((pos->x + window->offset->x) / window->zoom / window->size->x) *
		4 - 2;
	z.y = ((pos->y + window->offset->y) / window->zoom / window->size->y) *
		4 - 2;
	c.x = ((float)window->mouse_cursor->x / (float)window->size->x) *
		2.0 - 1.0;
	c.y = ((float)window->mouse_cursor->y / (float)window->size->y) *
		2.0 - 1.0;
	return (calc_it(window, &z, &c));
}
