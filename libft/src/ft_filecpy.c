/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filecpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 14:11:36 by jrouzier          #+#    #+#             */
/*   Updated: 2015/12/20 14:46:22 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_filecpy(char *input, char *output)
{
	int				fdi;
	int				fdo;
	int				data_read;
	unsigned char	buffer[FL_BUFF];

	if ((fdi = open(input, O_RDONLY)) < 0)
		return (fdi);
	if ((fdo = open(output, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR)) < 0)
	{
		close(fdi);
		return (fdo);
	}
	while ((data_read = read(fdi, buffer, FL_BUFF)))
	{
		if (!write(fdo, buffer, data_read))
		{
			close(fdi);
			close(fdo);
			return (-1);
		}
	}
	close(fdi);
	close(fdo);
	return (1);
}
