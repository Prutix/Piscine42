/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:25:03 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/18 15:10:11 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*t;
	int	i;

	i = 0;
	t = (int *)malloc(sizeof(int) * lenght);
	while (i < length)
	{
		t[i] = f(tab[i]);
		i++;
	}
}
