/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:12:14 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/21 11:05:41 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

long int	base_l(char *base)
{
	long int	i;
	int			j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_err(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[j])
		j++;
	if (j <= 1)
		return (0);
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == 32 || base[i] == '\f'
			|| base[i] == '\n' || base[i] == '\r' || base[i] == '\t'
			|| base[i] == '\v')
			return (0);
		i++;
	}
	return (1);
}

long int	ft_atoi_base(char *str, char *base)
{
	int			i;
	long int	m;
	long int	res;
	long int	l;
	int			s;

	s = 0;
	m = 1;
	res = 0;
	l = base_l(base);
	if (!l || !ft_err(base))
		return (0);
	while (base[s] == 32 || base[s] == '\f'
		|| base[s] == '\n' || base[s] == '\r' || base[s] == '\t'
		|| base[s] == '\v')
		s++;
	i = s - 1;
	while (str[++i])
	{
		if (str[i] == '-')
			m *= -1;
		else if (str[i] != '+')
			res = res * l + get_index(str[i], base);
	}
	return (res * m);
}
