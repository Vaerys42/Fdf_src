/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 18:04:23 by kboucaud          #+#    #+#             */
/*   Updated: 2017/01/21 18:04:24 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

char	**to_string(t_file graph)
{
	char	**new;

	while (graph->next != NULL)
	{
		i++;
		graph = graph->next;
	}
	new = (char*)malloc(sizeof(char) * (i + 1));
	while ()
}

void	add_line(**t_file graph)
{
	t_file		new;

	graph->next = new;
	new->next = NULL;
}

t_file	*get_file(char *path)
{
	t_file	*graph;

	add_line(&graph);
	while (get_next_line(graph->&line) != 0)
		add_line(&graph);

	return (to_string(graph));
}