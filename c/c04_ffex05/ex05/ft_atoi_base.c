/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:38:54 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/11 17:44:56 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_base(char *base)
{
	char	*i;
	int		n;

	n = 0;
	while (*base)
	{
		if (*base == '+' || *base == '-' || *base == ' ')
			return (0);
		i = base;
		while (*i)
		{
			if (*i == *base)
				return (0);
			*i++;
		}
		n++;
		base++;
	}
	return (n);
}

int	find_char_base(char c, char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (c == *str)
			return (i);
		str++;
		i++;
	}
	return (-1);
}

int	ft_char(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		m;
	int		number;
	int		n;

	n = ft_base(base);
	if (n < 2)
		return (0);
	m = 1;
	number = 0;
	while (*str)
	{
		if (*str == '-')
			m *= -1;
		else if (ft_char(*str, base))
		{
			while (ft_char(*str, base))
			{
				number = n * number + find_char_base(*str, base);
				str++;
			}
			break ;
		}
		str++;
	}
	return (m * number);
}

int	main(void)
{
	int i = ft_atoi_base("---+144525  a", "01");
	printf("%d", i);
}
