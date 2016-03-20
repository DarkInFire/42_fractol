/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/04 16:31:51 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/04 16:33:20 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <sys/types.h>
#include <inttypes.h>

int		ft_putnbrbase_fd(uintmax_t nbr, char *base, int fd)
{
	char	*output;
	int		nbr_size;

	output = ft_itoa_base(nbr, base);
	ft_putstr_fd(output, fd);
	nbr_size = ft_strlen(output);
	free(output);
	return (nbr_size);
}
