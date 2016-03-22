/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfile_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 10:34:24 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/22 10:34:24 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putfile_fd(int fdo, int fdi)
{
	char	*s;
	int		gnl_ret;
	int		write_ret;
	int		c_write;

	c_write = 0;
	while ((gnl_ret = ft_gnl(fdi, &s)) > 0)
	{
		if ((write_ret = write(fdo, s, GNL_BUFFER)) < 0)
			c_write += write_ret;
		ft_putchar('\n');
		c_write++;
	}
	if (write_ret < 0 || gnl_ret < 0)
		return (-1);
	return (c_write);
}
