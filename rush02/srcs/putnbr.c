/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:51:13 by rtehar            #+#    #+#             */
/*   Updated: 2023/07/23 09:31:35 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

int	ft_iterative_power(int power)
{
	int	result;
	int	x;

	x = 0;
	result = 1;
	while (power > 0)
	{
		result = result * 10;
		power--;
	}
	return (result);
}

int	ft_div(int nb)
{
	int	i;

	i = 0;
	while (nb >= 1)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	*ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	*tab2;
	int	b;

	i = 0;
	a = size - 1;
	tab2 = tab;
	while (i < (size / 2))
	{
		b = tab2[i];
		tab2[i] = tab2[a];
		tab2[a] = b;
		a--;
		i++;
	}
	return (tab2);
}

int	*ft_putnbr(int nb)
{
	int	*tab;
	int	i;
	int	y;
	int	x;

	x = 0;
	i = ft_div(nb);
	tab = malloc(sizeof(int) * i);
	while (nb > 0)
	{
		y = nb % 10;
		nb = nb / 10;
		tab[x] = y;
		x++;
	}
	tab = ft_rev_int_tab(tab, x);
	return (tab);
}

int	*get_nbr(int nb)
{
	int	*n;
	int	*tab;
	int	i;
	int	j;

	n = ft_putnbr(nb);
	i = 0;
	j = 0;
	tab = malloc(sizeof(int) * (ft_div(nb) * 2));
	while (n[j])
	{
		printf("%d", n[j]);
		j++;
	}
	j = 0;
	//printf("%d", n[0]);
	while (n[j])
	{
		tab[i] = n[j];
		if (i > 1)
		{
			i++;
			tab[i] = ft_iterative_power(i - 1);
		}
		i++;
		j++;
	}
	return (tab);
}
