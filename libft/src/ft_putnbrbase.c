/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/04 16:34:16 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/04 16:34:38 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putnbrbase(uintmax_t nbr, char *base)
{
	int		result;

	result = ft_putnbrbase_fd(nbr, base, 1);
	return (result);
}
