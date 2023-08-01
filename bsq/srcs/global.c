/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:56:10 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/24 13:52:46 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	get_divisor(int i)
{
	int	j;
	
	j = 0;
	while (i)
	{
		i =  i / 10;
		j++;
	}
	return (i);
}

int	get_y(char **tab)
{
	int	y;

	printf("%s", tab[0]);
	y = 0; //ft_atoi(tab[0]);
	return (y);
}

char	get_empty(char **tab)
{
	char	c;
	
	c = tab[0][2];
	printf("%c", c);
	return c;
}
