/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmattern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:13:23 by lmattern          #+#    #+#             */
/*   Updated: 2023/07/16 19:52:14 by lmattern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_col(int **grid, int row, int col);
int	check_view(int **grid, int row, int col, int **input);
int	is_grid_valid(int **grid, int **input);

int	fill_grid(int **grid, int **input, int index)
{
	int	digit;
	int	row;
	int	col;

	digit = 1;
	row = index / 4;
	col = index % 4;
	if (index == 16)
	{
		return (is_grid_valid(grid, input));
	}
	while (digit <= 4)
	{
		grid[row][col] = digit;
		if (check_row_col(grid, row, col)
			&& fill_grid(grid, input, index + 1)
			&& check_view(grid, row, col, input))
			return (1);
		grid[row][col] = 0;
		digit++;
	}
	return (0);
}
