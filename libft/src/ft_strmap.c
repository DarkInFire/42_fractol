/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 14:46:41 by jrouzier          #+#    #+#             */
/*   Updated: 2015/12/10 22:27:45 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		index;

	if ((str = (char *)malloc(sizeof(*str) * ft_strlen(s) + 1)) == NULL)
		return (NULL);
	index = -1;
	while (s[++index])
	{
		str[index] = f(s[index]);
	}
	str[index] = '\0';
	return (str);
}
