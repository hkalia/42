/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 13:14:06 by hkalia            #+#    #+#             */
/*   Updated: 2016/12/21 09:16:07 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gnl.h>
#include <stdio.h>
static void		del(t_arr *s)
{
	size_t	i;

	i = 0;
	while (i < GNL_MAX_FD)
	{
		if (s[i].cap != 0)
			arr_dtr(&s[i]);
		++i;
	}
}

int				gnl(const int fd, char **line)
{
	static t_arr	s[GNL_MAX_FD] = {{0, 0, 0}};
	char			buf[GNL_BUFF_SIZE];
	uint8_t			*tmp;
	ptrdiff_t		diff;
	ssize_t			r;

	if (fd < 0 || fd > GNL_MAX_FD || line == 0 || GNL_BUFF_SIZE == 0)
		return (-1);
	if (s[fd].cap == 0)
		GRD1(arr_init(&s[fd], GNL_BUFF_SIZE) == -1, del(s), -1);
	while ((r = read(fd, buf, GNL_BUFF_SIZE)) != 0)
	{
		printf("while\n");
		GRD1(r == -1, del(s), -1);
		GRD1(arr_insertat(&s[fd], s[fd].len, buf, r) == -1, del(s), -1);
		if ((tmp = ft_memchr(s[fd].arr, '\n', s[fd].len)) != 0)
		{
			printf("whileif\n");
			diff = tmp - s[fd].arr;
			GRD1((*line = ft_calloc(diff + 1, sizeof(char))) == 0
				, del(s), -1);
			ft_memcpy(*line, s[fd].arr, diff);
			arr_removeat(&s[fd], 0, diff + 1);
			return (1);
		}
	}
	if ((tmp = ft_memchr(s[fd].arr, '\n', s[fd].len)) != 0)
	{
		printf("lastif\n");
		diff = tmp - s[fd].arr;
		GRD1((*line = ft_calloc(diff + 1, sizeof(char))) == 0
			, del(s), -1);
		ft_memcpy(*line, s[fd].arr, diff);
		arr_removeat(&s[fd], 0, diff + 1);
		return (1);
	}
	return (0);
}
