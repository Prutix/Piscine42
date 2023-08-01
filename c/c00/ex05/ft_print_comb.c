/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 09:53:48 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/27 09:00:02 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_print_num(int a);
void	ft_print_numb(int a, int b, int c);

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print_numb(a, b, c);
				if (a != 7 || b != 8 || c != 9)
				{
					write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_num(int a)
{
	char	*numbers;

	numbers = "0123456789";
	write(1, numbers + a, 1);
}

void	ft_print_numb(int a, int b, int c)
{
	ft_print_num(a);
	ft_print_num(b);
	ft_print_num(c);
}

int	main(void)
{
	ft_print_comb();
}
