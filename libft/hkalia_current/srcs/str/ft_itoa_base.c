/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:54:44 by hkalia            #+#    #+#             */
/*   Updated: 2016/11/16 16:23:05 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <str.h>
#include <ft_stdlib.h>
#include <stdbool.h>
#include <stdlib.h>

char	*ft_itoa_base(uintmax_t src, short base, const char *spec)
{
	short				src_len;
	char				*ret;

	if (base < 2)
		return (0);
	src_len = ft_nbrlen_base(src, base);
	if (!(ret = ft_calloc(src_len + 1, sizeof(char))))
		return (0);
	while (--src_len)
	{
		ret[src_len] = spec[src % base];
		src = src / base;
	}
	ret[src_len] = spec[src % base];
	return (ret);
}
