/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 17:36:59 by hkalia            #+#    #+#             */
/*   Updated: 2016/12/02 17:40:47 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <chr.h>

int	ft_isxdigit(int src)
{
	return ((src >= 48 && src <= 57) || (src >= 65 && src <= 70)
			|| (src >= 97 && src <= 102) ? 1 : 0);
}
