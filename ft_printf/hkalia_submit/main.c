/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:48:51 by hkalia            #+#    #+#             */
/*   Updated: 2016/11/28 18:50:49 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <strings.h>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <limits.h>

/*
**	0x10000
*/

int		main(void)
{
	int		r;


	setlocale(LC_ALL, "");
	r = printf("%S\n", L"Á±≥");
	ft_putnbr(r);
	r = printf("%S\n", L"Á±≥");
	ft_putnbr(r);

	return (0);
}
