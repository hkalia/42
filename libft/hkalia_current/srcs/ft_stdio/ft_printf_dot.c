/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_dot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 14:50:33 by hkalia            #+#    #+#             */
/*   Updated: 2016/12/15 15:05:59 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdio.h>

int8_t	ft_printf_dot(t_arr *ret, const char **fmt,
						va_list *ap, t_ft_printf *state)
{
	(void)ret;
	++*fmt;
	state->flg_dot = 1;
	if (**fmt == '*')
	{
		state->int_dot = va_arg(*ap, int);
		++*fmt;
		if (state->int_dot < 0)
		{
			state->int_dot = 0;
			state->flg_dot = 0;
		}
	}
	else
	{
		while (**fmt >= '0' && **fmt <= '9')
		{
			state->int_dot = 10 * state->int_dot + ((**fmt) - '0');
			++*fmt;
		}
	}
	return (0);
}