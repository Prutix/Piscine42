/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmattern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:34:27 by lmattern          #+#    #+#             */
/*   Updated: 2023/07/16 19:49:57 by lmattern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	free_grinput(int **grid, int **input)
{
	int	i;

	if (grid != NULL)
	{
		i = 0;
		while (i < 4)
		{
			free(grid[i]);
			i++;
		}
		free(grid);
	}
	if (input != NULL)
	{
		i = 0;
		while (i < 4)
		{
			free(input[i]);
			i++;
		}
		free(input);
	}
}
