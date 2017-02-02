/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:38:08 by hkalia            #+#    #+#             */
/*   Updated: 2017/02/02 12:14:51 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <chr.h>
#include <unistd.h>

int	ft_putchar_fd(int fd, int src)
{
	return (write(fd, &src, 1));
}
