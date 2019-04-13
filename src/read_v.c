/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_v.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <adzikovs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 12:29:59 by adzikovs          #+#    #+#             */
/*   Updated: 2019/04/13 13:41:32 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "scop_typedefs.h"

int				read_v(char **words, t_object *res, int obj_am[OBJ_AM])
{
	t_vec3		v;

	if (get_2d_arr_size((void**)words) != 4 &&
		get_2d_arr_size((void**)words) != 5)
		return (WTF);
	v[0] = (dt)atof(words[1]);
	v[1] = (dt)atof(words[2]);
	v[2] = (dt)atof(words[3]);
	t_list_copy_push_back(&res->v, v, sizeof(v));
	obj_am[V_AM]++;
	return (OK);
}

int				read_vt(char **words, t_object *res, int obj_am[OBJ_AM])
{
	t_vec3		v;
	size_t		size;

	if (get_2d_arr_size((void**)words) < 2 ||
		get_2d_arr_size((void**)words) > 4)
		return (WTF);
	v[0] = (dt)atof(words[1]);
	size = sizeof(dt);
	if (get_2d_arr_size((void**)words) > 2)
	{
		v[1] = (dt)atof(words[2]);
		size += sizeof(dt);
	}
	if (get_2d_arr_size((void**)words) > 3)
	{
		v[2] = (dt)atof(words[3]);
		size += sizeof(dt);
	}
	t_list_copy_push_back(&res->v, v, size);
	obj_am[VT_AM]++;
	return (OK);
}
