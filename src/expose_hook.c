#include "fractol.h"

int		fol_expose_hook(t_args *args)
{
	fol_reset_display(args);
	return (1);
}