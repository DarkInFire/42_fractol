#include "fractol.h"

int		fol_mousecursor_hook(int x, int y, t_args *args)
{
	ft_setpos(args->mouse_cursor, x, y, 0);
	
	if (!args->lock_mouse)
		if (x % 5 == 0 || y % 5 == 0)
			fol_reset_display(args);
	return (1);
}
