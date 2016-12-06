/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 16:52:57 by hkalia            #+#    #+#             */
/*   Updated: 2016/12/06 11:52:08 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

int		main(void)
{
	t_arr	nums;
	int		i;
	int		*p;

	arr_init(nums, {sizeof(int),NULL,NULL,NULL});
	i = 0;
	while (i < 10)
	{
		arr_push_back(nums, &i);
		++i;
	}
	p = (int*)arr_front(nums);
	while (p != NULL)
	{
		printf("%d\n", *p);
		p = (int *)arr_next(nums, p);
	}
	arr_free(nums);
	return 0;
}
