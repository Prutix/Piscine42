int	check_row(int row, int number,int **grid)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (grid[row][col] == number)
			return 0; //the digit is already in the line
		col++;
	}
	return (1); // the digit isnt already in the line
}

int     check_column(int col, int number,int **grid)
{
        int     row;

        row = 0;
        while (row < 4)
        {
                if (grid[row][col] == number)
                        return 0; //the digit is already in the column
                row++;
        }
        return (1); // the digit isnt already in the column
}
