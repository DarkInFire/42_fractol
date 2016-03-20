/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 11:58:54 by jrouzier          #+#    #+#             */
/*   Updated: 2015/12/05 11:58:59 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		result;
	int		sign;
	char	*cur;

	result = 0;
	sign = 0;
	cur = (char *)str;
	while (*cur == '\t' || *cur == '\n' || *cur == '\v' || *cur == '\f'
			|| *cur == '\r' || *cur == ' ')
		cur++;
	sign = (*cur == '-') ? -1 : 1;
	cur = (*cur == '+' || *cur == '-') ? cur + 1 : cur;
	while (*cur >= '0' && *cur <= '9')
	{
		result = result * 10 + *cur - 48;
		cur++;
	}
	return (result * sign);
}
