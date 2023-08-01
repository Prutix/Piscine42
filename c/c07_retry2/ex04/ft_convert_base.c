/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:12:04 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/20 14:50:07 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);
int	ft_err(char *base);
int	get_index(char c, char *base);
int	base_l(char *base);

long int	nb_l(long int nb, char *base)
{
	long int	l;
	long int	b_l;

	b_l = base_l(base);
	l = 0;
	printf("%ld ", nb);
	printf("%ld ", b_l);
	while (nb >= b_l)
	{
		
		l++;
		nb /= b_l;
	}
	printf("%ld", l);
	return (l + 1);
}

char	*sort(char *s, int size)
{
	int		i;
	char	b;

	i = 0;
	while (i < (size / 2))
	{
		b = s[i];
		s[i] = s[size - i - 1];
		s[size - i - 1] = b;
		i++;
	}
	return (s);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int		r;
	char			*res;
	char			*s;
	int				i;

	i = 0;
	if (ft_err(base_from) == 0 || ft_err(base_to) == 0)
		return (0);
	r = ft_atoi_base(nbr, base_from);
	//printf("%ld", nb_l(r, base_to));
	res = malloc(sizeof(char) * 32);
	while (r)
	{
		res[i] = base_to[r % base_l(base_to)];
		i++;
		r /= base_l(base_to);
	}
	res[i] = '\0';
	s = sort(res, str_len(res));
	return (s);
}

int	main(void)
{
	char *S = ft_convert_base("--2147483648", "0123456789", "0123456789abcdef");
	printf("%s", S);
	free(S);
}