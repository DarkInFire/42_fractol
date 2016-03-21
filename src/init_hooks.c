#include "fractol.h"
#include <X11/Xlib.h>

int		fol_init_hooks(t_args *args)
{
	mlx_expose_hook(args->window, fol_expose_hook, args);
	mlx_key_hook(args->window, fol_key_hook, args);
	mlx_mouse_hook(args->window, fol_mousebutton_hook, args);
	if (args->type == 1)
		mlx_hook(args->window, MotionNotify, PointerMotionMask,
			fol_mousecursor_hook, args);
	return (1);
}
