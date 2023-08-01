/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:48:08 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/26 09:46:39 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tail.h"

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *) s1 - *(unsigned char *) s2);
}

int	get_lenght_file(int file)
{
	char	c;
	int		f;
	int		i;

	i = 0;
	f = 1;
	while (f)
	{
		f = read(file, &c, 1);
		i++;
	}
	close(file);
	return (i);
}

void	put_str(char *str)
{
	write(1, str, str_len(str));
}

char	*write_file(int size, char *dict)
{
	char	*res;
	int		f;

	f = open(dict, O_RDONLY);
	res = (char *)malloc(sizeof(char) * size);
	read(f, res, size);
	close(f);
	return (res);
}

void	print_file(char *file)
{
	char	**tab;
	char	*s;
	int		l;
	int		f;

	f = open(file, O_RDONLY);
	l = get_lenght_file(f);
	s = write_file(l, file);
	tab = ft_split(file, "\n");
}