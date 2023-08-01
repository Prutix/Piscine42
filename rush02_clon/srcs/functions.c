/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:57:06 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/23 17:04:53 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

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

struct s_list	*write_file(int size, char *dict)
{
	char	*res;
	int		f;

	f = open(dict, O_RDONLY);
	res = (char *)malloc(sizeof(char) * size);
	read(f, res, size);
	close(f);
	return (parse(res));
}

void	ft_putstr(char *str, int a)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	write(a, str, i);
}

struct s_list	*parse(char *str)
{
	t_list	*list;
	char	**tab;
	int		i;

	i = 0;
	tab = ft_split(str, "\n");
	list = (t_list *)malloc(sizeof(t_list) * count_break(str));
	while (tab[i])
	{
		list[i].nb = ft_atoi(ft_split(tab[i], ":")[0]);
		list[i].str = only_char(ft_split(tab[i], ":")[1]);
		i++;
	}
	list[i].str = 0;
	free(tab);
	return (list);
}
