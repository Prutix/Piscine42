/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:25:05 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/16 15:24:27 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	print_hex(int c, int err)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	if (err == 0 && c <= 0)
	{
		c += 256;
	}
	if (c > 16)
	{
		print_hex(c / 16, 1);
		print_hex(c % 16, 1);
	}
	else
	{
		if (err == 0)
			ft_putchar('0');
		ft_putchar(hex[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_printable(str[i]))
			ft_putchar(str[i]);
		else
		{
			j = str[i];
			print_hex(j, 0);
		}
		i++;
	}
}
