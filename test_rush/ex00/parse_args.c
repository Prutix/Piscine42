/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmattern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:14:49 by lmattern          #+#    #+#             */
/*   Updated: 2023/07/16 19:48:58 by lmattern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**parse_args(char **argv)
{
	int	**input;
	int	i;
	int	j;
	int	k;

	input = (int **)malloc(sizeof(int *) * 4);
	if (input == 0)
		return (0);
	k = 0;
	i = -1;
	while (++i < 4)
	{
		j = 0;
		input[i] = (int *)malloc(sizeof(int) * 4);
		while (j < 4)
		{
			if (argv[1][k] != ' ')
			{
				input[i][j] = argv[1][k] - 48;
				j++;
			}
			k++;
		}
	}
	return (input);
}
