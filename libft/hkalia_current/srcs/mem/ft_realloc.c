/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 13:42:20 by hkalia            #+#    #+#             */
/*   Updated: 2016/12/13 14:12:26 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mem.h>
#include <ft_string.h>
#include <stdlib.h>

void	*ft_realloc(void *src, size_t src_sze, size_t sze)
{
	void	*ret;

	GRD(src == 0 && sze == 0, 0);
	if (src == 0 && sze != 0)
	{
		GRD((ret = malloc(sze)) == 0, 0);
		return (ret);
	}
	GRD(sze == 0, 0);
	GRD(src_sze == sze, src);
	GRD((ret = malloc(sze)) == 0, 0);
	ft_memcpy(ret, src, src_sze > sze ? sze : src_sze);
	return (ret);
}
