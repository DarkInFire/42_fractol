/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 16:20:32 by jrouzier          #+#    #+#             */
/*   Updated: 2016/02/03 19:30:25 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*str_s1;

	if ((str_s1 = (char *)malloc(n + 1)) == NULL)
		return (NULL);
	ft_strncpy(str_s1, s1, n);
	return (str_s1);
}
