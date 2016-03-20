/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 11:24:49 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/19 11:24:50 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	ft_printtab(int **tab, size_t h, size_t w)
{
	int		i_y;
	int		i_x;
	char	*buffer;

	i_x = -1;
	i_y = -1;
	while (++i_y < (int)h)
	{
		while (++i_x < (int)w)
		{
			ft_putstr((buffer = ft_itoa(tab[i_y][i_x])));
			ft_putchar(' ');
			free(buffer);
		}
		ft_putchar('\n');
		i_x = 0;
	}
}
