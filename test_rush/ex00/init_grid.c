/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmattern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:29:00 by lmattern          #+#    #+#             */
/*   Updated: 2023/07/16 19:49:43 by lmattern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**init_grid(void)
{
	int	**grid;
	int	i;

	grid = (int **)malloc(sizeof(int *) * 4);
	if (grid == 0)
		return (0);
	i = 0;
	while (i < 4)
	{
		grid[i] = (int *)malloc(sizeof(int) * 4);
		if (grid[i] == 0)
			return (0);
		i++;
	}
	return (grid);
}
