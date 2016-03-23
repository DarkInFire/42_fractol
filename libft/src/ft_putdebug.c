/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdebug.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 19:24:03 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/23 19:24:04 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putdebug(int lvl, int g_lvl, char *s)
{
	int	result;

	result = ft_putdebug_fd(1, lvl, g_lvl, s);
	return (result);
}
