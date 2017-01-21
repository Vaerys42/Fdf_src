/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 15:22:12 by kboucaud          #+#    #+#             */
/*   Updated: 2017/01/21 15:22:14 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H

# define FDF_H

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "mlx.h"

typedef struct  s_point
{
	int			x;
	int			y;
	int			z;
	t_point		*next;
}				t_point;

typedef struct  s_repo
{
	void		*mlx;
	void		*window;
}				t_repo;

#endif