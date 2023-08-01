/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:19:36 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/27 10:00:29 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	comb(int start, int n)
{
	int	i;

	if (n == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
		return ;
	}
	i = start + 1;
	while (i < 10)
	{
		ft_putchar(start + '0');
		ft_putchar(i + '0');
		comb(i, n - 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	comb(0, n);
}
