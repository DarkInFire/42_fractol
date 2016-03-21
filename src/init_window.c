#include "fractol.h"
#include "mlx.h"
#include "libft.h"

t_window	*fol_init_window(t_args *args)
{
	t_window	*window;

	window = (t_window *)malloc(sizeof(t_window));
	window->size = ft_getpos(1000, 1000, 0);
	window->mlx = args->mlx;
	if (!(window->window = mlx_new_window(window->mlx, window->size->x,
		window->size->y, "fractol")))
		throw_error("Unable to initialize mlx.");
	window->type = 1;
	window->zoom = 1;
	window->mouse_cursor = ft_getpos(0, 0, 0);
	window->offset = ft_getpos(0, 0, 0);
	window->it = 42;
	window->lock_mouse = 0;
	return (window);
}
