/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_files.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:33:59 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/24 13:57:36 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	check_map(char *file)
{
	int	f;

	f = open(file, O_RDONLY);
	if (f == -1)
		return (0);
	return (1);
}

int	count_break(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			c++;
		i++;
	}
	return (c);
}

int	get_lenght_file(char *file)
{
	char	c;
	int		f;
	int		fi;
	int		i;

	i = 0;
	fi = open(file, O_RDONLY);
	f = 1;
	while (f)
	{
		f = read(fi, &c, 1);
		i++;
	}
	close(fi);
	return (i);
}

char	**get_file(char *file)
{
	int		l;
	int		f;
	char	*s;
	char	**tab;

	if (check_map(file))
	{
		l = get_lenght_file(file);
		f = open(file, O_RDONLY);
		s = malloc(sizeof(char) * l);
		if (s == NULL)
			return (NULL);
		read(f, s, l);
		close(f);
		tab = malloc(sizeof(char *) * count_break(s));
		free(s);
		if (tab == NULL)
			return (NULL);
	}
	else
		return (tab = NULL);
	return (tab);
}
