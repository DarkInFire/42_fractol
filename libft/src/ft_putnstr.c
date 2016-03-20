/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrouzier <jrouzier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/04 16:35:35 by jrouzier          #+#    #+#             */
/*   Updated: 2016/03/04 16:35:38 by jrouzier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnstr(char const *str, size_t str_len)
{
	ft_putnstr_fd(str, str_len, STDOUT_FILENO);
}
