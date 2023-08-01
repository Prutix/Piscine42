/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:02:39 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/06 18:54:32 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	n;

	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + 48);
	}
	if (nb >= 10 && nb < 100)
	{
		ft_putchar((nb / 10) + 48);
		ft_putchar((nb % 10) + 48);
	}
	if (nb > 100)
	{
		ft_putnbr((nb / 10));
		ft_putnbr(nb % 10);
	}
	if (nb < 0)
	{
		n = -(nb * 2);
		ft_putchar('-');
		nb = nb + n;
		ft_putnbr(nb);
	}
}
