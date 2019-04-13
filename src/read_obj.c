/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_obj.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <adzikovs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 12:20:11 by adzikovs          #+#    #+#             */
/*   Updated: 2019/04/13 12:31:33 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scop_typedefs.h"

static int	dispatch

int			read_obj(int fd, t_object *res)
{
	int		pr_am[OBJ_AM];
	char	*line;
	char	**words;

	ft_bzero(pr_am, sizeof(*pr_am) * OBJ_AM);
	return (OK);
}

