/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:02:02 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/19 10:20:38 by tgaugain         ###   ########.fr       */
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

int	base_l(char *base)
{
	int	i;
	int	j;

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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	m;
	int	res;
	int	l;
	int	s;

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
	while (str[++i] && is_in_base(str[i], base))
	{
		if (str[i] == '-')
			m *= -1;
		else if (str[i] != '+')
			res = res * l + get_index(str[i], base);
	}
	return (res * m);
}

int	main(void)
{
	int	i = ft_atoi_base("1asfrfsd", "0123456789abcdef");
	printf("%d", i);
}