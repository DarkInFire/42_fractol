#include "fractol.h"
#include "libft.h"

int		fol_add_window_to_list(t_args *args)
{
	ft_lstaddnlast(&(args->w_list), (void *)args->tmp_window,
		sizeof(t_window));
	return (1);
}
