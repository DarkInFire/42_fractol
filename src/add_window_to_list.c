#include "fractol.h"

int		fol_add_window_to_list(t_args *args)
{
	t_window	*window;

	window = fol_init_window(args);
	ft_lstaddnlast(&(args->w_list), (void *)window, sizeof(t_window));
	return (1);
}
