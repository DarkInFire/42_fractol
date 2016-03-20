/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:33:19 by jrouzier          #+#    #+#             */
/*   Updated: 2016/01/26 14:49:55 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str_s1;

	if ((str_s1 = (char *)malloc(ft_strlen(s1) + 1)) == NULL)
		return (NULL);
	ft_strcpy(str_s1, s1);
	return (str_s1);
}
