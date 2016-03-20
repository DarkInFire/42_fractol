/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 16:41:21 by jrouzier          #+#    #+#             */
/*   Updated: 2016/01/21 16:45:47 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_srttab(int *tab, size_t n)
{
	size_t	index;
	size_t	pass;

	pass = 1;
	while (pass++ <= (n - 1))
	{
		index = 0;
		while (index <= (n - 2))
		{
			if (tab[index] > tab[index + 1])
				ft_swapint(&tab[index], &tab[index + 1]);
			index++;
		}
	}
}
