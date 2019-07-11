/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   damier.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcottet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 14:50:28 by fcottet           #+#    #+#             */
/*   Updated: 2019/06/25 16:45:27 by fcottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void		damier_text(t_text *tex, double obj_color[4],
			double obj_colord[4])
{
	int		x;
	int		y;
	int		pos;
	double	color[4];

	pos = 0;
	y = -1;
	while (++y < tex->h)
	{
		x = -1;
		while (++x < tex->w)
		{
			if (((y + x) % 2) == 0)
				double_vec(obj_color, 1, color);
			else
				double_vec(obj_colord, 1, color);
			tex->img[pos++] = (color[2] * 255);
			tex->img[pos++] = (color[1] * 255);
			tex->img[pos++] = (color[0] * 255);
		}
	}
}

int			init_damier(t_obj *s)
{
	s->texture.h = 60;
	s->texture.w = 60;
	if (!(s->texture.img = (unsigned char *)malloc(sizeof(char)
					* s->texture.h * 3 * s->texture.w)))
		return (FAILED_TO_MALLOC);
	damier_text(&s->texture, s->color, s->colord);
	return (EXIT_SUCCESS);
}
