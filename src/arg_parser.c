#include "fractol.h"

t_args		*arg_parser(int nb_params, char **params)
{
	t_args	*args;

	args = (t_args *)malloc(sizeof(t_args));
	args->type = get_fractol_id(type);
	if (!(args->mlx = mlx_init()))
		throw_error("Unable to initialize mlx.\n");
	if (!(args->window = mlx_new_window(args->mlx, 1000, 1000,
		ft_strjoin("fractol by jrouzier. Type:", type))))
		throw_error("Unable to initate window.\n");
	args->zoom = 1;
	args->offset = ft_getpos(0, 0, 0);
	args->it = 42;
	args->lock_mouse = 0;
	args->mouse_cursor = ft_getpos(0, 0, 0);

	
	return (args);
}