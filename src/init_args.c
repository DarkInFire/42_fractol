#include "fractol.h"
#include "libft.h"
#include "mlx.h"

t_args	*fol_init_args()
{
	t_args	*args;

	if (!(args = (t_args *)malloc(sizeof(t_args))))
		throw_error("Unable to alloc args struct.");
	if (!(args->mlx = mlx_init()))
		throw_error("Unable to initialize mlx.");
	args->w_list = NULL;
	args->nb_windows = 0;
	return (args);
}
