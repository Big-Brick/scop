/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <adzikovs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 13:48:18 by adzikovs          #+#    #+#             */
/*   Updated: 2019/04/13 14:10:24 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scop_typedefs.h"

static int		read_v_vt(char *v_vt, t_v_vt res[1])
{
	char		**indexes;

	indexes = ft_strsplit(v_vt, "/");
	return (OK);
}

int				read_f(char **words, t_object *res, int obj_am[OBJ_AM])
{
	t_v_vt		face[4];

	if (get_2d_arr_size((void**)words) != 4 &&
		get_2d_arr_size((void**)words) != 5)
		return (WTF);

	return (OK);
}
