/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:51:18 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/25 17:39:10 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tail.h"

int	main(int argc, char **argv)
{
	char	buf[2];

	if (argc > 1)
	{
		parse_args(argc, argv);
	}
	else
	{
		while (read(0, buf, 1))
			continue ;
	}
	return (0);
}