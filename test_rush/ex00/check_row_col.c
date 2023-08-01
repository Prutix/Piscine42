/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row_col.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmattern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:19:01 by lmattern          #+#    #+#             */
/*   Updated: 2023/07/16 19:48:33 by lmattern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row(int **grid, int row)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if ((grid[row][i] != 0)
				&& (grid[row][i] == grid[row][j])
				&& (i != j))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_col(int **grid, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if ((grid[i][col] != 0)
				&& (grid[i][col] == grid[j][col])
				&& (i != j))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_row_col(int **grid, int row, int col)
{
	if (check_row(grid, row) && check_col(grid, col))
	{
		return (1);
	}
	return (0);
}
