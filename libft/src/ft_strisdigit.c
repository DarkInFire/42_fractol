#include "libft.h"
#include <stdio.h>

int		ft_strisdigit(char *s)
{
	int		i;

	i = -1;
	while (s[++i] != '\0')
	{
		if (!(ft_isdigit(s[i])) && !(s[i] == '-') && !(s[i] == '+'))
			return (0);
	}
	return (1);
}