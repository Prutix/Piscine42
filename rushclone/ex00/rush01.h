#ifndef RUSH01_H
# define RUSH01_H

int		**ft_place_in_tab_row(int **tab, int arg, int row);
void	ft_putstr(char *str);
void	print_tab(int **tab);
void	ft_putchar(char c);
int		**init_grid(void);
void	free_grid(int **grid);
int		*ft_parsing(char *str);
int		check_row(int row, int number, int **grid);
int		check_view_top(int col, int constr[16], int **grid);
int		check_view_bottom(int col, int constr[16], int **grid);
int		check_view_left(int row, int constr[16], int **grid);
int		check_view_right(int row, int constr[16], int **grid);
int		check_column(int col, int number, int **grid);
int		*is_conform(char **argv);

#endif
