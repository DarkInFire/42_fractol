#include "libft.h"
#include "fractol.h"
#include <stdlib.h>
#include <sys/stat.h> 
#include <fcntl.h>

int		fol_show_help(t_args *args)
{
	int fd;

	fd = open("man", O_RDONLY);
	if (fd < 0)
		throw_error("Unable to open help file.");
	ft_putfile(fd);
	exit_fol(args);
	return (1);
}