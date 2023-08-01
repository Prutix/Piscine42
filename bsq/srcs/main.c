/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:15:17 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/24 13:56:46 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	main(int argc, char **argv)
{
	int		i;
	char	**t;

	i = 1;
	if (argc > 1)
	{
		while (argc > i)
		{
			t = get_file(argv[i]);
			free(t);
			put_str("\n");
			i++;
		}
	}
	else
	{
		
	}
}
