#include "fractol.h"

int		arg_zoom(char *p, t_args *args)
{
	int		zoom;

	if (!(ft_strisdigit(p)))
		throw_error("Zoom parameter must be digit only!");
	zoom = ft_atoi(p);
	if (zoom <= 0)
		throw_error("Zoom parameter must be superior to zero.");
	args->tmp_window->zoom = zoom;
	return (1);
}
