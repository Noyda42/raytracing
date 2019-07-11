/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_text.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcottet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 16:21:39 by fcottet           #+#    #+#             */
/*   Updated: 2019/06/29 16:29:19 by fcottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

int		init_text(t_obj *tmp)
{
	int	ret;

	ret = 0;
	if ((tmp->texture.e_text == PERLIN || tmp->texture.e_text == WOOD
					|| tmp->texture.e_text == MARBLE)
					&& (ret = init_perlin(tmp)) < 0)
		return (ret);
	if (tmp->texture.e_text == DAMIER && (ret = init_damier(tmp)) < 0)
		return (ret);
	return (1);
}
