#include "fractol.h"
#include "mlx.h"

void	fol_fill_image(t_args *args)
{
	int x;
	int y;

	x = -1;
	while (++x <= WIDTH)
	{
		y = -1;
		while (++y <= HEIGHT)
			fol_putpxl_img(args, x, y, fol_getcolor(args, x, y));
	}
}