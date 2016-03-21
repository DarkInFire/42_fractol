
#include "fractol.h"

static int	f_julia(t_args *args, int x, int y)
{
	int		i;
	t_comp	z;
	t_comp	c;
	t_comp	tmp;

	i = 0;
	z.x = (((x + args->x_offset) / args->zoom / WIDTH) * 4 - 2);
	z.y = (((y + args->y_offset) / args->zoom / HEIGHT) * 4 - 2);
	c.x = args->jx;
	c.y = args->jy;
	while ((z.x * z.x + z.y * z.y) < 4 && i < args->it)
	{
		tmp = z;
		z.x = tmp.x * tmp.x - tmp.y * tmp.y + c.x;
		z.y = tmp.x * tmp.y + tmp.x * tmp.y + c.y;
		i++;
	}
	return (i);
}
