/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 08:21:17 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/08 12:09:59 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	p_linemid(int x);
void	p_firstline(int x);
void	p_lastline(int x, int y);

void	rush(int x, int y)
{
	int	k;

	k = 0;
	if (x == 0 || y == 0)
		return ;
	p_firstline(x);
	if (y == 1)
		return ;
	ft_putchar('\n');
	while (k < y - 2)
	{
		p_linemid(x);
		k++;
	}
	p_lastline(x, y);
}

void	p_linemid(int x)
{
	int	i;

	i = 0;
	ft_putchar('B');
	if (x == 1)
	{
		ft_putchar('\n');
		return ;
	}
	else
	{
		while (i != (x - 2))
		{
			ft_putchar(' ');
			i++;
		}
	}
	ft_putchar('B');
	ft_putchar('\n');
}

void	p_firstline(int x)
{
	int	i;

	i = 0;
	while (i++ <= x)
	{
		if (i > 1 && i <= x - 1)
			ft_putchar('B');
		else if (i == 1 || i == x)
			ft_putchar('A');
	}
}

void	p_lastline(int x, int y)
{
	int	i;

	i = 0;
	while (i++ <= x)
	{
		if (x == 1 && y == 1)
			break ;
		if (i > 1 && i <= x - 1)
			ft_putchar('B');
		else if (i == 1 || i == x)
			ft_putchar('C');
	}
}
