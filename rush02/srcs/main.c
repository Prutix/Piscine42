/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:51:55 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/23 08:56:15 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

int	main(int argc, char **argv)
{
	int		nb;

	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		if (nb < 0)
			ft_putstr("Error\n", 2);
		else
		{
			write_nb(nb);
		}
	}
	else
	{
		
	}
}
