/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 15:30:23 by jrouzier          #+#    #+#             */
/*   Updated: 2015/12/10 22:29:02 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	index;

	if ((str = (char *)malloc(sizeof(*str) * ft_strlen(s) + 1)) == NULL)
		return (NULL);
	index = -1;
	while (s[++index])
	{
		str[index] = f(index, s[index]);
	}
	str[index] = '\0';
	return (str);
}
