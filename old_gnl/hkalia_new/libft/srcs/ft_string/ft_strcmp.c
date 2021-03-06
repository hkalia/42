/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:39:26 by hkalia            #+#    #+#             */
/*   Updated: 2016/09/27 14:55:01 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

int		ft_strcmp(const char *src1, const char *src2)
{
	while (*src1 == *src2)
	{
		if (*src1 == '\0')
			return (0);
		src1++;
		src2++;
	}
	return ((unsigned char)*src1 - (unsigned char)*src2);
}
