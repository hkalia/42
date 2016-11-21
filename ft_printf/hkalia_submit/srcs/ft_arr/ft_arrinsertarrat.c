/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrinsertarrat.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 16:06:31 by hkalia            #+#    #+#             */
/*   Updated: 2016/11/20 16:53:09 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_arr.h>

static int8_t	case2(t_arr *dst, size_t i, t_arr *src)
{
	t_arr	tmp;
	size_t	j;

	FT_ARR_GRD(!ft_arrinit(&tmp, dst->arr_len - i), 0, 0);
	j = i;
	while (j < dst->arr_len)
		tmp.arr[tmp.arr_len++] = dst->arr[j++];
	j = 0;
	while (j < src->arr_len)
		dst->arr[i++] = src->arr[j++];
	j = 0;
	while (j < tmp.arr_len)
		dst->arr[i++] = tmp.arr[j++];
	ft_arrreset(&tmp);
	return (1);
}

static int8_t	case1(t_arr *dst, size_t i, t_arr *src)
{
	t_arr	tmp;
	size_t	j;
	size_t	k;

	if (dst->arr_sze < i + src->arr_len)
	{
		FT_ARR_GRD(!ft_arrinit(&tmp, i + src->arr_len), 0, 0);
	}
	else
		FT_ARR_GRD(!ft_arrinit(&tmp, dst->arr_len + src->arr_len)
					, 0, 0);
	j = 0;
	while (j < dst->arr_len && j < i)
		tmp.arr[tmp.arr_len++] = dst->arr[j++];
	while (tmp.arr_len < i)
		++tmp.arr_len;
	k = 0;
	while (k < src->arr_len)
		tmp.arr[tmp.arr_len++] = src->arr[k++];
	while (j < dst->arr_len)
		tmp.arr[tmp.arr_len++] = dst->arr[j++];
	ft_arrreset(dst);
	FT_ARR_INIT(dst, tmp.arr_sze, tmp.arr_len, tmp.arr);
	return (1);
}

static int8_t	case0(t_arr *dst, size_t i, t_arr *src)
{
	size_t	j;

	FT_ARR_GRD(!ft_arrinit(dst, i + src->arr_len), 0, 0);
	dst->arr_len = i;
	j = 0;
	while (j < src->arr_len)
		dst->arr[dst->arr_len++] = src->arr[j++];
	return (1);
}

int8_t			ft_arrinsertarrat(t_arr *dst, size_t i, t_arr *src)
{
	size_t	j;

	FT_ARR_GRD(!dst, 0, 0);
	FT_ARR_GRD(!src, 0, 1);
	FT_ARR_GRD(src->arr_sze == 0 || src->arr == 0, 0, 1);
	FT_ARR_GRD(src->arr_len == 0, 0, 1);
	if (dst->arr_sze == 0 || dst->arr == 0)
		return (case0(dst, i, src));
	if (dst->arr_sze - dst->arr_len < src->arr_len
		|| dst->arr_sze < i + src->arr_len)
		return (case1(dst, i, src));
	if (i < dst->arr_len)
		return (case2(dst, i, src));
	j = 0;
	while (j < src->arr_len)
		dst->arr[i++] = src->arr[j++];
	dst->arr_len = i;
	return (1);
}
