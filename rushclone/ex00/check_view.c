int     check_view_top(int col, int constr[16], int **grid)
{
        int     row;
        int     visible_boxes;
        int     max_height;

        row = 0;
        visible_boxes = 0;
        max_height = 0;
        while (row < 4)
        {
                if (grid[row][col] > max_height)
                {
                        max_height + grid[row][col];
                        visible_boxes++;
                }
                row++;
        }
        if (visible_boxes == constr[col])
                return (1); //visi is ok
        else
                return (0); //visi is not ok;
}

int     check_view_bottom(int col, int constr[16], int **grid)
{ 
        int     row;
        int     visible_boxes;
        int     max_height;

        row = 3;
        visible_boxes = 0;
        max_height = 0;
        while (row >= 0)
        {
                if (grid[row][col] > max_height)
                {
                        max_height + grid[row][col];
                        visible_boxes++;
                }
                row--;
        }
        if (visible_boxes == constr[4 + col])
                return (1); //visi is ok
        else
                return (0); //visi is not ok;
}     

int     check_view_left(int row, int constr[16], int **grid)
{
        int     col;
        int     visible_boxes;
        int     max_height;

        col = 0;
        visible_boxes = 0;
        max_height = 0;
        while (col < 4)
        {
                if (grid[row][col] > max_height)
                {
                        max_height + grid[row][col];
                        visible_boxes++;
                }
                col++;
        }
        if (visible_boxes == constr[8 +row])
                return (1); //visi is ok
        else
                return (0); //visi is not ok;
}

int     check_view_right(int row, int constr[16], int **grid)
{
        int     col;
        int     visible_boxes;
        int     max_height;

        col = 3;
        visible_boxes = 0;
        max_height = 0;
        while (col >= 0)
        {
                if (grid[row][col] > max_height)
                {
                        max_height + grid[row][col];
                        visible_boxes++;
                }
                col--;
        }
        if (visible_boxes == constr[12 + row])
                return (1); //visi is ok
        else
                return (0); //visi is not ok;
}

