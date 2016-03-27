#include "libft.h"
#include "fractol.h"
#include <math.h>

int		f_oil(t_window *window, t_pos *pos)
{
	int		i;
	t_comp	z;
	t_comp	c;
	double	x;

	c.x = (((pos->x + window->offset->x) / window->zoom / window->size->x) *
		4 - 2);
	c.y = (((pos->y + window->offset->y) / window->zoom / window->size->y) *
		4 - 2);
	z.x = ((float)window->mouse_cursor->x / (float)window->size->x) *
		2.0 - 1.0;
	z.y = -0.75 + ((float)window->mouse_cursor->y / (float)window->size->y) *
		2.0 - 1.0;
	i = -1;
	while (++i < window->it && (pow(z.x, 2) + z.y * z.y) < 4)
	{
		x = z.x;
		z.x = (z.x + c.x - z.y + c.y) / 2;
		z.y = x * 2 * (z.y + z.y + c.x - z.y) / 2;
	}
	return (i);
}
