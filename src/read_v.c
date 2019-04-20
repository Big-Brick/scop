/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_v.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <adzikovs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 12:29:59 by adzikovs          #+#    #+#             */
/*   Updated: 2019/04/20 09:20:49 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "scop_typedefs.h"

int				read_v(char *str, t_object *res, int obj_am[OBJ_AM])
{
	t_vec3		v;

	if (sscanf(str, "v %f %f %f", v, v + 1, v + 2) != 3)
		return (WTF);
	t_list_copy_push_back(&res->v, v, sizeof(v));
	obj_am[V_AM]++;
	return (OK);
}

int				read_vt(char *str, t_object *res, int obj_am[OBJ_AM])
{
	t_vec3		vt;
	int			size;

	size = sscanf(str, "v %f %f", vt, vt + 1);
	if (size <= 0 || size > 2)
		return (WTF);
	t_list_copy_push_back(&res->vt, vt, (size_t)size * sizeof(*vt));
	obj_am[VT_AM]++;
	return (OK);
}
