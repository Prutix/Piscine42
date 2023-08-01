/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:51:13 by rtehar            #+#    #+#             */
/*   Updated: 2023/07/24 13:06:38 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

int	ft_iterative_power(int power)
{
	int	result;

	result = 1;
	while ((power > 3 && power < 6) || (power > 6 && power < 9) || power > 9)
		power--;
	while (power > 0)
	{
		result = result * 10;
		power--;
	}
	return (result);
}

int	ft_iterative_power2(int nb, int power)
{
	while ((power <= 2 && power > 0) || (power > 3 && power < 6) 
		|| (power > 6 && power < 9) || power > 9)
	{
		nb = nb * 10;
		power--;
	}
	if (power == 6 || power == 9)
	{
		while (power > 0)
		{
			nb = nb * 10;
			power--;
		}
	}
	return (nb);
}

int	ft_div(int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	*parse_tab(int *tab, int i, int x, int *tab2)
{
	int	y;

	y = 0;
	while (x >= 0)
	{
		while (y == 0 || ((y % ((i - 1) / 2)) != 0 && x >= 0))
		{
			if (tab[x] != 0)
			{
				tab2[y] = ft_iterative_power2(tab[x], x);
				y++;
				if ((y % ((i -1) / 2) != 0 && tab [x - 1] != 0) || y == 1)
					x--;
			}
			else
				x--;
			if (x >= 0)
			{
				tab2[y] = ft_iterative_power(x);
				y++;
			}
		}
		x--;
	}
	return (tab2);
}

int	*ft_putnbr(int nb)
{
	int	zero;
	int	*tab;
	int	i;
	int	x;
	int	*tab2;

	x = 0;
	i = ft_div(nb);
	tab = malloc(sizeof(int) * i);
	tab2 = malloc(sizeof(int) * (i + 2));
	while (nb > 0)
	{
		zero = nb % 10;
		nb = nb / 10;
		tab[x] = zero;
		x++;
	}
	x = i - 1;
	return (parse_tab(tab, i, x, tab2));
}
