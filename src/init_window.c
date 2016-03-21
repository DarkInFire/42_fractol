#include "fractol.h"
#include "mlx.h"
#include "libft.h"

t_window	*fol_init_window(t_args *args, int type)
{
	t_window	*window;

	window = (t_window *)malloc(sizeof(t_window));
	if (!(window->window = mlx_new_window(args->mlx, 1000, 1000, "fractol")))
		throw_error("Unable to initialize mlx.");
	window->mlx = args->mlx;
	window->type = type;
	window->zoom = 1;
	window->mouse_cursor = ft_getpos(0, 0, 0);
	window->offset = ft_getpos(0, 0, 0);
	window->it = 42;
	window->lock_mouse = 0;
	return (window);
}
