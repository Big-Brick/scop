/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <adzikovs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 13:46:57 by adzikovs          #+#    #+#             */
/*   Updated: 2019/04/13 13:46:57 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCOP_H
# define SCOP_H

# include "scop_typedefs.h"

int				read_v(char **words, t_object *res, int obj_am[OBJ_AM]);

int				read_vt(char **words, t_object *res, int obj_am[OBJ_AM]);

#endif
