/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:51:47 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/18 12:40:35 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str);

void	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	write(1, c, i);
}

int	calculate(int a, int b, char operator)
{
	int	res;

	res = 0;
	if (operator == '+')
		res = a + b;
	else if (operator == '-')
		res = a - b;
	else if (operator == '*')
		res = a * b;
	else if (operator == '/')
		res = a / b;
	else if (operator == '%')
		res = a % b;
	return (res);
}

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

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc < 4)
	{
		return (0);
	}
	else
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		if (argv[2][0] == '/' && b == 0)
		{
			ft_putstr("Stop : division by zero");
			return (0);
		}
		else if (argv[2][0] == '%' && b == 0)
		{
			ft_putstr("Stop : modulo by zero");
			return (0);
		}
		ft_putnbr(calculate(a, b, argv[2][0]));
	}
}
