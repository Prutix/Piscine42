/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_view.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmattern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:58:25 by lmattern          #+#    #+#             */
/*   Updated: 2023/07/16 19:52:00 by lmattern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_view_top(int col, int **grid, int **input)
{
	int	seen;
	int	taller;
	int	i;

	i = 0;
	seen = 0;
	taller = 0;
	while (i < 4)
	{
		if (grid[i][col] > taller)
		{
			taller = grid[i][col];
			seen++;
		}
		i++;
	}
	if (seen <= input[0][col])
		return (1);
	else
		return (0);
}

int	check_view_bot(int col, int **grid, int **input)
{
	int	seen;
	int	taller;
	int	i;

	i = 3;
	seen = 0;
	taller = 0;
	while (i >= 0)
	{
		if (grid[i][col] > taller)
		{
			taller = grid[i][col];
			seen++;
		}
		i--;
	}
	if (seen <= input[1][col])
		return (1);
	else
		return (0);
}

int	check_view_left(int row, int **grid, int **input)
{
	int	seen;
	int	taller;
	int	i;

	i = 0;
	seen = 0;
	taller = 0;
	while (i < 4)
	{
		if (grid[row][i] > taller)
		{
			taller = grid[row][i];
			seen++;
		}
		i++;
	}
	if (seen <= input[2][row])
		return (1);
	else
		return (0);
}

int	check_view_right(int row, int **grid, int **input)
{
	int	seen;
	int	taller;
	int	i;

	i = 0;
	seen = 0;
	taller = 0;
	while (i >= 0)
	{
		if (grid[row][i] > taller)
		{
			taller = grid[row][i];
			seen++;
		}
		i--;
	}
	if (seen <= input[3][row])
		return (1);
	else
		return (0);
}

int	check_view(int **grid, int row, int col, int **input)
{
	if (check_view_top(col, grid, input)
		&& check_view_bot(col, grid, input)
		&& check_view_left(row, grid, input)
		&& check_view_right(row, grid, input))
		return (1);
	else
		return (0);
}
