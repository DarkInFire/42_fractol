#include "fractol.h"

static int	check_parameter(char *p, t_args *args)
{
	if (args->pwait == 1)
		arg_window_height(p, args);
	else if (args->pwait == 2)
		arg_window_width(p, args);
	else if (args->pwait == 3)
		arg_iterations(p, args);
	args->pwait = 0;
	return (1);
}

int		fol_read_argument(char *a, t_args *args)
{
	if (args->pwait)
		check_parameter(a,args);
	else if (ft_strcmp(a, "wh") == 0)
		return (1);
	else if (ft_strcmp(a, "ww") == 0)
		return (2);
	else if (ft_strcmp(a, "it") == 0)
		return (3);
	else if (ft_strcmp(a, "help") == 0)
		fol_show_help();
	else
		fol_putusage("Unknow argument.");
	return (0);
}