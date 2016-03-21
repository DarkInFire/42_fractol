
#include "fractol.h"

int		fol_mousebutton_hook(int button, int x, int y, t_args *args)
{
	(void)x;
	(void)y;
	if (button == 4)
	{
		args->zoom *= ZOOM;
		args->x_offset = args->x_offset * ZOOM +
			((WIDTH - (WIDTH / ZOOM)) / 2) * ZOOM +
			(x - WIDTH / 2) * ZOOM - (x - WIDTH / 2);
		args->y_offset = args->y_offset * ZOOM +
			((HEIGHT - (HEIGHT / ZOOM)) / 2) * ZOOM +
			(y - HEIGHT / 2) * ZOOM - (y - HEIGHT / 2);
	}
	else if (button == 5 && args->zoom > 0)
	{
		args->zoom /= ZOOM;
		args->x_offset = args->x_offset / ZOOM -
			((WIDTH - (WIDTH / ZOOM)) / 2) / ZOOM
			- (x - WIDTH / 2) * ZOOM + (x - WIDTH / 2);
		args->y_offset = args->y_offset / ZOOM -
			((HEIGHT - (HEIGHT / ZOOM)) / 2) / ZOOM
			- (y - HEIGHT / 2) * ZOOM + (y - HEIGHT / 2);
	}
	fol_reset_display(args);
	return (1);
}