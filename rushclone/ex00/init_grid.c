#include <stdlib.h>

int	**init_grid(void)
{
	int	**grid;
	int	i;
	int	j;

	grid = (int **)malloc(4 * sizeof(int *));
	if (grid == 0)
		return (0);
	i = 0;
	while (i < 4)
	{
		grid[i] = (int *)malloc(4 * sizeof(int));
		if (grid[i] == 0)
			return (0);
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

void	free_grid(int **grid)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
