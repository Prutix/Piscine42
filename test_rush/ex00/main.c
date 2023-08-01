/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmattern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:11:24 by lmattern          #+#    #+#             */
/*   Updated: 2023/07/17 11:00:18 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_input_valid(char **argv);
void	ft_error_msg(void);
int		**parse_args(char **argv);
int		**init_grid(void);
int		fill_grid(int **grid, int **input, int index);
void	print_grid(int **grid);
void	free_grinput(int **grid, int **input);

int	main(int argc, char **argv)
{
	int	**input;
	int	**grid;

	if (argc != 2)
	{
		ft_error_msg();
		return (0);
	}
	if (is_input_valid(argv) == 0)
	{
		ft_error_msg();
		return (0);
	}
	input = parse_args(argv);
	grid = init_grid();
	if (fill_grid(grid, input, 0) == 1)
		print_grid(grid);
	else
	{
		ft_error_msg();
		free_grinput(grid, input);
		return (0);
	}
	free_grinput(grid, input);
}

void	ft_error_msg(void)
{
	write(2, "Error\n", 6);
}
