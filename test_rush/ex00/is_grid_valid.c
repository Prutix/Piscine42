/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_grid_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmattern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:13:22 by lmattern          #+#    #+#             */
/*   Updated: 2023/07/16 19:52:41 by lmattern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_col(int **grid, int row, int col);
int	check_view(int **grid, int row, int col, int **input);

int	is_grid_valid(int **grid, int **input)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (check_row_col(grid, i, i) == 0)
			return (0);
		if (check_view(grid, i, i, input) == 0)
			return (0);
		i++;
	}
	return (1);
}
