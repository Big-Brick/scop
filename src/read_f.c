/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <adzikovs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 13:48:18 by adzikovs          #+#    #+#             */
/*   Updated: 2019/04/20 11:42:38 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "scop_typedefs.h"

static int			rel_to_abs(int rel, int am)
{
	if (rel >= 0)
		return (rel);
	else if ((am + rel) >= 0)
		return (am + rel + 1);
	else
		return (rel);
}

static int			get_v_vt(char *v_vt, t_v_vt *res, int obj_am[OBJ_AM])
{
	int			v;
	int 		vt;
	int 		vn;

	if (sscanf(v_vt, "%d/%d/%d", &v, &vt, &vn) == 3)
	{
		if (v == 0 || vt == 0)
			return (WTF);
		if ((res[0][0] = rel_to_abs(v, obj_am[V_AM])) <= 0 ||
			(res[0][1] = rel_to_abs(vt, obj_am[VT_AM])) <= 0)
			return (WTF);
		return (OK);
	}
	else if (sscanf(v_vt, "%d//%d", &v, &vn) == 2 ||
				sscanf(v_vt, "%d", &v) == 1)
	{
		if (v == 0)
			return (WTF);
		if ((res[0][0] = rel_to_abs(v, obj_am[V_AM])) <= 0)
			return (WTF);
		res[0][1] = 0;
		return (OK);
	}
	else
		return (WTF);
}

static inline int	error_exit(char **words)
{
	free_2darr((void**)words);
	return (WTF);
}

int					read_f(char *str, t_object *res, int obj_am[OBJ_AM])
{
	char		**words;
	t_v_vt		face[4];
	size_t		size;
	size_t		i;

	if ((words = ft_strsplit(str, " ")) == NULL)
		return (WTF);
	size = get_2d_arr_size((void**)words);
	if (size != 4 && size != 5)
		return (error_exit(words));
	i = 1;
	while (i < size)
	{
		if (get_v_vt(words[i], face + i - 1, obj_am))
			return (error_exit(words));
		i++;
	}
	t_list_copy_push_back(&res->f, face, sizeof(*face) * (size - 1));
	obj_am[F_AM]++;
	free_2darr((void**)words);
	return (OK);
}
