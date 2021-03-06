/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_put_to_image.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdurand <tdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 08:29:02 by tdurand           #+#    #+#             */
/*   Updated: 2014/12/18 08:29:10 by tdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_pixel_put_to_image(unsigned long img_color, t_env *e, int x, int y)
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;

	if (x <= e->winx && y <= e->winy)
	{
		r = (img_color & 0xFF0000) >> 16;
		g = (img_color & 0xFF00) >> 8;
		b = (img_color & 0xFF);
		if (e->data->endian == 0)
		{
			e->data->data_str[y * e->data->sl + x * e->data->bpp / 8] = b;
			e->data->data_str[y * e->data->sl + x * e->data->bpp / 8 + 1] = g;
			e->data->data_str[y * e->data->sl + x * e->data->bpp / 8 + 2] = r;
		}
		else
		{
			e->data->data_str[y * e->data->sl + x * e->data->bpp / 8] = r;
			e->data->data_str[y * e->data->sl + x * e->data->bpp / 8 + 1] = g;
			e->data->data_str[y * e->data->sl + x * e->data->bpp / 8 + 2] = b;
		}
	}
}
