#include "fractol.h"
#include "libft.h"

static int		get_fractal_type(t_args *args, char *fractal)
{
	if (ft_strcmp(fractal, "julia") == 0)
		args->type = 1;
	else if (ft_strcmp(fractal, "mandelbrot") == 0)
		args->type = 2;
	else if (ft_strcmp(fractal, "douady") == 0)
		args->type = 3;
	else
		fol_putusage("Unknow type of fractol.");
	return (1);
}

static void		read_arg(char *p, t_args *args)
{
	int		f_id;

	if (p[0] == '-')
		throw_error("Parameters are not supported at this moment.");
	else
		get_fractal_type(args, p);
	fol_add_window_to_list(args);
}

t_args			*fol_arg_parser(int nb_params, char **params)
{
	t_args	*args;
	int		i;

	args = fol_init_args();
	i = -1;
	while (++i < nb_params)
		read_arg(params[i + 1], args);
	return (args);
}
