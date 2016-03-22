#include "fractol.h"
#include "libft.h"

int		f_sierpinski(t_window *window, t_pos *pos)
{
	int		i;
	t_pos	*tmp;

	tmp = ft_getpos(pos->x, pos->y, pos->z);
	i = 0;
	tmp->x = (tmp->x + window->offset->x) / window->zoom;
	tmp->x = (tmp->x < 0) ? -(tmp->x) : tmp->x;
	tmp->y = (tmp->y + window->offset->y) / window->zoom;
	tmp->y = (tmp->y < 0) ? -(tmp->y) : tmp->y;
	while ((tmp->x > 0 || tmp->y > 0) && i < window->it)
	{
		if (tmp->x % 3 == 1 && tmp->y % 3 == 1)
			return (i);
		tmp->x /= 3;
		tmp->y /= 3;
		i++;
	}
	return (window->it);
}