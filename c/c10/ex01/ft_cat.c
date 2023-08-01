/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:35:51 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/25 14:43:55 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_cat.h"

int	main(int argc, char **argv)
{
	int		f;
	int		args;
	int		i;
	char	buf[2];

	f = 0;
	i = 0;
	args = argc - 1;
	if (argc > 1)
	{
		while (i < args)
		{
			f = open(argv[i + 1], O_RDONLY);
			if (f == -1)
				return (puterror("Cannot read file.\n"));
			else
				printfile(f);
			i++;
			close(f);
		}
	}
	else
		while (read(0, buf, 1))
			write(1, &buf[0], 1);
	return (0);
}
