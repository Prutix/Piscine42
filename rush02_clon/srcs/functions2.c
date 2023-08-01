/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:19:07 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/23 22:58:19 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

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

char	*only_char(char *str)
{
	int		l;
	int		i;
	int		j;
	char	*s;

	l = str_len(str);
	j = 0;
	i = 0;
	s = (char *)malloc(sizeof(char) * l);
	while (str[i] == ' ')
	{
		i++;
	}
	while (str[i])
	{
		s[j] = str[i];
		j++;
		i++;
	}
	return (s);
}

void	write_nb(int nb, char *dict)
{
	t_list	*s;
	int		*tab;
	int		j;
	int		l;
	int		i;

	l = get_lenght_file(open(dict, O_RDONLY));
	s = write_file(l, dict);
	tab = ft_putnbr(nb);
	j = 0;
	ft_putstr("Attention...\nEt c'est pas le bon ඞ.\n", 1);
	while (tab[j++])
	{
		i = 0;
		while (s[i++].str)
		{
			if (tab[j] == s[i].nb)
				ft_putstr(s[i].str, 1);
		}
	}
	free(s);
}
