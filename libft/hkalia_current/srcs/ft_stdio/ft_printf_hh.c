/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hh.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:09:19 by hkalia            #+#    #+#             */
/*   Updated: 2016/11/23 11:24:15 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdio.h>

int8_t	ft_printf_hh(t_arr *ret, const char **fmt,
					va_list *ap, t_ft_printf *state)
{
	(void)fmt;
	(void)ap;
	FT_GRD1(state->int_len_mod != 0, free(ret->arr), -1);
	state->int_len_mod = 1;
	*fmt += 2;
	return (0);
}