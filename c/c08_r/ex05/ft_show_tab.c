/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:38:21 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/15 15:17:06 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	write(1, str, i);
}

void	put_nbr(int nb)
{
	if (nb == -2147483648)
	{
		put_str("-2147483648");
		return ;
	}
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + 48);
	}
	if (nb >= 10 && nb < 100)
	{
		ft_putchar(nb / 10 + 48);
		ft_putchar(nb % 10 + 48);
	}
	if (nb > 100)
	{
		put_nbr(nb / 10);
		put_nbr(nb % 10);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		put_nbr(nb);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	unsigned int	i;

	i = 0;
	while (par[i].str != 0)
	{
		put_str(par[i].str);
		ft_putchar('\n');
		put_nbr(par[i].size);
		ft_putchar('\n');
		put_str(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
