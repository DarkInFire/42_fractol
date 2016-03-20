/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/04 16:00:28 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/04 16:34:08 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include <stdlib.h>
#include <sys/types.h>
#include <inttypes.h>
#include "libft.h"

char	*ft_itoa_base(uintmax_t nbr, char *base)
{
	char		*buffer;
	int			toalloc;
	uintmax_t	temp;
	uintmax_t	baselen;

	baselen = ft_strlen(base);
	toalloc = 2;
	temp = nbr;
	while ((temp = temp / baselen) > 0)
		toalloc++;
	buffer = (char *)malloc(sizeof(char) * toalloc--);
	buffer[toalloc--] = '\0';
	while (nbr >= baselen)
	{
		buffer[toalloc--] = base[nbr % baselen];
		nbr = nbr / baselen;
	}
	buffer[toalloc--] = base[nbr % baselen];
	return (buffer);
}
