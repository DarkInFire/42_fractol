/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/04 16:29:11 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/04 16:29:27 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchar.h>
#include <unistd.h>
#include "libft.h"

void	ft_putwstr(wchar_t const *str)
{
	ft_putwstr_fd(str, STDOUT_FILENO);
}
