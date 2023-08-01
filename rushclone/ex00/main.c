/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 08:13:27 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/16 13:52:24 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

int	main(int argc, char **argv)
{
	int	**tab;
	int	*args;

	if (argc != 1)
	{
		args = is_conform(argv);
		tab = init_grid();
		ft_place_in_tab_row(tab, 4, 1);
		print_tab(tab);
		free_grid(tab);
	}
	return (0);
}
