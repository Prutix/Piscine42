/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:16:57 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/18 10:36:58 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	a = max - min;
	range = (int **)malloc(sizeof(int *) * a);
	a = 0;
	while (a < max - min)
	{
		*range[a] = min + a;
		a++;
	}
	return (a);
}

int	main(void)
{
	int	**r;
	int	i = 0;
	int	a;

	a = ft_ultimate_range(r, 12, 25);
	printf("%d\n", a);
}
