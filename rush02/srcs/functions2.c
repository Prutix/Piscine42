/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:19:07 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/23 09:22:03 by tgaugain         ###   ########.fr       */
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

void	write_nb(int nb)
{
	char	*s;
	int		f;
	int		l;
	int		i;
	int		*tab;

	tab = get_nbr(nb);
	i = 0;
	while (tab[i])
	{
		printf("%d ", tab[i]);
		i++;
	}
	f = open(DICT, O_RDONLY);
	l = get_lenght_file(f);
	s = write_file(l);
	parse(s);
	close(f);
	free(s);
}
