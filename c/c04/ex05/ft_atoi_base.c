/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 08:20:03 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/11 08:23:54 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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


int	ft_atoi_base(char *str, char *base)
{
	
}
