/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temehenn <temehenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 14:41:13 by fcottet           #+#    #+#             */
/*   Updated: 2019/07/01 12:03:59 by temehenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void	ft_usage(void)
{
	ft_putendl("usage: rt file_name");
	exit(0);
}

int		is_valid_fread(FILE *fimg)
{
	int	ret;

	ret = ferror(fimg);
	clearerr(fimg);
	return (!ret) ? 1 : 0;
}
