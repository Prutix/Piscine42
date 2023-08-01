/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:41:54 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/13 08:01:40 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		a;
	char	c;

	i = 1;
	a = 0;
	if (argc)
	{
		while (argv[i])
		{
			a = 0;
			while ((argv[i])[a])
			{
				c = argv[i][a];
				write(1, &c, 1);
				a++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}
