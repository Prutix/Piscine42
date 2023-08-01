/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:16:57 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/21 11:03:42 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*tab;

	i = 0;
	len = max - min;
	if (len <= 0)
	{
		*range = 0;
		return (0);
	}
	tab = malloc(sizeof(int) * len);
	if (!tab)
	{
		*range = 0;
		return (-1);
	}
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (len);
}

/*int	main(void)
{
	int	*r;
	int	i = 0;
	int	a;

	a = ft_ultimate_range(&r, 12, 25);
	printf("%d\n", a);
}*/
