#include "fractol.h"
#include "libft.h"

static int		get_fractol_id(char *fractal)
{
	if (ft_strcmp(fractal, "julia") == 0)
		return (1);
	else if (ft_strcmp(fractal, "mandelbrot") == 0)
		return (2);
	else if (ft_strcmp(fractal, "douady") == 0)
		return (3);
	return (0);
}	

static void		read_arg(char *p, t_args *args)
{
	int		f_id;
	t_window	*window;

	if (p[0] == '-')
		throw_error("Parameters are not supported at this moment.");
	if ((f_id = get_fractol_id(p)) == 0)
		fol_putusage("Unknow type of fractol.");
	window = fol_init_window(args, f_id);
	ft_lstaddnlast(&(args->w_list), (void *)window, sizeof(t_window));
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
