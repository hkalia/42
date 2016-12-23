/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 17:25:54 by hkalia            #+#    #+#             */
/*   Updated: 2016/12/02 17:30:33 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

int	ft_ispunct(int src)
{
	return ((src >= 33 && src <= 47) || (src >= 58 && src <= 64)
			|| (src >= 91 && src <= 96) || (src >= 123 && src <= 126) ? 1 : 0);
}
