/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:13:03 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/21 11:35:21 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_err(char *base, int *err)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*err = 1;
	while (base[i] && *err == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*err = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '%'
				|| base[i] == '/' || base[i] == '*' || base[i] == '='
				|| base[i] == ',' || base[i] == '.'
				|| base[i] < 33 || base[i] > 126)
			*err = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lbase;
	int		err;
	long	nb;

	lbase = 0;
	err = 0;
	ft_err(base, &err);
	nb = nbr;
	if (err == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		while (base[lbase])
			lbase++;
		if (nb < lbase)
			ft_putchar(base[nb]);
		if (nb >= lbase)
		{
			ft_putnbr_base(nb / lbase, base);
			ft_putnbr_base(nb % lbase, base);
		}
	}
}
