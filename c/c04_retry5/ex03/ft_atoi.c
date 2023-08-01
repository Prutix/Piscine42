/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:07:07 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/18 15:52:04 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_space(char c)
{
	if (c == 32 || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int	is_nbr(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int		i;
	int		m;
	int		f;

	i = 0;
	m = 1;
	f = 0;
	while (is_space(str[i]))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m *= -1;
		i++;
	}
	while (is_nbr(str[i]))
	{
		f = f * 10 + (str[i] - '0');
		i++;
	}
	f *= m;
	return (f);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_atoi(argv[1]));
}*/