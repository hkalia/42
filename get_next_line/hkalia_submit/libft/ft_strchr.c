/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:39:21 by hkalia            #+#    #+#             */
/*   Updated: 2016/09/26 15:41:31 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *src, int src_x)
{
	if (src == 0)
		return (0);
	while (*src != (char)src_x)
	{
		if (*src == '\0')
			return (NULL);
		src++;
	}
	return ((char *)src);
}
