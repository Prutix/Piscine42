/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:13:03 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/18 17:56:32 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_l(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_erreur(char *base, int *erreur)
{
	int	i;
	int	j;

	i = 0;
	if (base_l(base) <= 1)
		*erreur = 1;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				*erreur = 1;
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			*erreur = 1;
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		erreur;
	int		ibase;
	int		i;
	int		n[100];

	ibase = base_l(base);
	erreur = 0;
	i = 0;
	ft_erreur(base, &erreur);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (erreur == 0)
	{
		while (nbr)
		{
			n[i] = nbr % ibase;
			nbr /= ibase;
			i++;
		}
		while (i-- >= 0)
			ft_putchar(base[n[i]]);
	}
}
