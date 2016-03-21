
#include "fractol.h"

static int	fol_mandelbrot(t_args *args, int x, int y)
{
	int		i;
	t_comp	z;
	t_comp	c;
	t_comp	tmp;

	i = 0;
	c.x = (((x + args->x_offset) / args->zoom / WIDTH) * 4 - 2);
	c.y = (((y + args->y_offset) / args->zoom / HEIGHT) * 4 - 2);
	z.x = 0.0;
	z.y = 0.0;
	while ((z.x * z.x + z.y * z.y) < 4 && i < args->it)
	{
		tmp = z;
		z.x = tmp.x * tmp.x - tmp.y * tmp.y + c.x;
		z.y = tmp.x * tmp.y + tmp.x * tmp.y + c.y;
		i++;
	}
	return (i);
}