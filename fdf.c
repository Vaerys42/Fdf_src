/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 17:39:36 by kboucaud          #+#    #+#             */
/*   Updated: 2017/01/21 17:39:38 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			main(int argc, char **argv)
{
	char	**graph;

	if (argc != 2)
	{
		write(1, "Usage : ./fdf <filename>\n", 25);
		return (0);
	}
	graph = get_file(argv[1]);
	return (0);
}
