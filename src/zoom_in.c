#include "fractol.h"
#include "libft.h"

void	fol_zoom_in(t_pos *pos, t_args *args)
{
		args->zoom *= ZOOM;
		args->x_offset = args->x_offset * ZOOM +
			((WIDTH - (WIDTH / ZOOM)) / 2) * ZOOM +
			(pos->x - WIDTH / 2) * ZOOM - (pos->x - WIDTH / 2);
		args->y_offset = args->y_offset * ZOOM +
			((HEIGHT - (HEIGHT / ZOOM)) / 2) * ZOOM +
			(pos->y - HEIGHT / 2) * ZOOM - (pos->y - HEIGHT / 2);
}