/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:14:02 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/23 15:20:09 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

int	is_nb(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	m;

	m = 1;
	i = 0;
	res = 0;
	if (str[0] == '-')
	{
		m *= -1;
		i = 1;
	}
	if (!is_nb(str[i]))
		return (-1);
	while (is_nb(str[i]))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * m);
}
