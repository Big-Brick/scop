/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scop_typedefs.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <adzikovs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 12:07:13 by adzikovs          #+#    #+#             */
/*   Updated: 2019/04/13 13:53:44 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCOP_TYPEDEFS_H
# define SCOP_TYPEDEFS_H

# include "scop_defines.h"

# include "libft.h"

typedef float		t_vec3f[3];

typedef double		t_vec3d[3];

typedef float		dt;

typedef dt			t_vec3[3];

typedef int			t_v_vt[2];

typedef int			t_face[][2];

typedef struct		s_object
{
	t_list			*v;
	t_list			*vt;
	t_list			*f;
}					t_object;

typedef int			(*t_read_fp)(char **, t_object *, int [OBJ_AM]);

#endif
