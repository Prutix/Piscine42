/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:58:47 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/05 15:59:17 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_print_numb(int a);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_numb(a / 10);
			ft_print_numb(a % 10);
			write(1, " ", 1);
			ft_print_numb(b / 10);
			ft_print_numb(b % 10);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

void	ft_print_numb(int a)
{
	a = a + 48;
	write(1, &a, 1);
}
