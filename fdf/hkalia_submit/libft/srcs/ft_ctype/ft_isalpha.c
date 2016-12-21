/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:36:51 by hkalia            #+#    #+#             */
/*   Updated: 2016/12/02 17:15:35 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

int	ft_isalpha(int src)
{
	return ((src >= 'A' && src <= 'Z') || (src >= 'a' && src <= 'z') ? 1 : 0);
}
