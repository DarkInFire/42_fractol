#include "libft.h"
#include "fractol.h"
#include <stdlib.h>
#include <sys/stat.h> 
#include <fcntl.h>

int		fol_show_help(t_args *args)
{
	int fd;
	char *s;

	fd = open("man", O_RDONLY);
	if (fd < 0)
		throw_error("Unable to open help file.");
	while ((ft_gnl(fd, &s)) > 0)
	{
		ft_putstr(s);
		ft_putchar('\n');
	}
	close(fd);
	exit_fol(args);
	return (1);
}