/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:31:48 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/18 15:35:36 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	a;
	int	*t;

	if (min >= max)
		return (NULL);
	a = max - min;
	t = (int *) malloc(sizeof(int) * a);
	if (t == NULL)
		return (NULL);
	else
	{
		a = 0;
		while (a < max - min)
		{
			t[a] = min + a;
			a++;
		}
		return (t);
	}
}

/*int	main(void)
{
	int	*i = ft_range(-12, 12345674);
	int	o = 0;
	while (i[o])
	{
		printf("%d ", i[o]);
		i++;
	}
}
*/