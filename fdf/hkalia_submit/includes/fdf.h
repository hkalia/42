/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 17:08:34 by hkalia            #+#    #+#             */
/*   Updated: 2016/12/05 13:23:18 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include <stdbool.h>
# include <stdint.h>

# ifndef GRDS
#  define GRD(a, b) do{if(a){return(b);}}while(0)
#  define GRD1(a, b, c) do{if(a){b;return(c);}}while(0)
#  define GRD2(a, b, c, d) do{if(a){b;c;return(d);}}while(0)
#  define GRD3(a, b, c, d, e) do{if(a){b;c;d;return(e);}}while(0)
# endif

typedef struct	s_xy
{
	int			x;
	int			y;
}				t_xy;

typedef struct	s_xyz
{
	int			x;
	int			y;
	int			z;
}				t_xyz;

typedef struct	s_xyxy
{
	int			x0;
	int			y0;
	int			x1;
	int			y1;
}				t_xyxy;

typedef struct	s_click
{
	int			btn;
	t_xy		pos;
}				t_click;

typedef struct	s_mouse
{
	bool		flg;
	t_click		p;
	t_click		r;
	t_xy		pos;
}				t_mouse;

typedef struct	s_img
{
	void		*id;
	char		*img;
	int			bpp;
	int			ln;
	int			end;
}				t_img;

typedef struct	s_win
{
	void		*id;
	t_xy		max;
}				t_win;

typedef struct	s_mlx
{
	void		*id;
	t_win		win;
	t_img		img;
	t_mouse		mouse;
}				t_mlx;

void			img_new(t_mlx *mlx);
void			pixel(t_mlx *mlx, int color, t_xy src);
void			line(t_mlx *mlx, int color, t_xyxy src);
void			square(t_mlx *mlx, int color, t_xyxy src);
int				key_press(int keycode, void *param);
int				key_release(int keycode, void *param);
int				mouse_press(int button, int x, int y, void *param);
int				mouse_release(int button, int x, int y, void *param);
int				mouse_motion(int x, int y, void *param);

#endif
