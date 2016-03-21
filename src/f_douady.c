
#include "fractol.h"

static int	f_douady(t_args *args, int x, int y)
{
	int		i;
	t_comp	z;
	t_comp	c;
	t_comp	tmp;

	i = 0;
	z.x = (((x + args->x_offset) / args->zoom / WIDTH) * 4 - 2);
	z.y = (((y + args->y_offset) / args->zoom / HEIGHT) * 4 - 2);
	c.x = -0.123;
	c.y = -0.745;
	while ((z.x * z.x + z.y * z.y) < 4 && i < args->it)
	{
		tmp = z;
		z.x = tmp.x * tmp.x - tmp.y * tmp.y + c.x;
		z.y = tmp.x * tmp.y + tmp.x * tmp.y + c.y;
		i++;
	}
	return (i);
}

