#include "libft.h"
#include "fractol.h"

int		f_dragon(t_window *window, t_pos *pos)
{
	int		i;
	t_comp	z;
	t_comp	c;
	float	x;

	c.x = (((pos->x + window->offset->x) / window->zoom / window->size->x) *
		4 - 2);
	c.y = (((pos->y + window->offset->y) / window->zoom / window->size->y) *
		4 - 2);
	z.x = -0.45186;
	z.y = -0.0984651;
	i = -1;
	while (++i < 100 && (z.x * z.x + z.y * z.y) < 4)
	{
		x = z.x;
		z.x = z.x * z.x * z.x - (3 * z.x * z.y * z.y) + c.x;
		z.y = (3 * x * x * z.y) + c.y;
	}
	return (i);
}