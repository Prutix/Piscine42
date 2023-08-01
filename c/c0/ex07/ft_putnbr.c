/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:02:39 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/16 09:24:19 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
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
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
}
