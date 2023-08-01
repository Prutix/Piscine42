/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:59:09 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/26 09:24:59 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tail.h"

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	tab_len(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	return (i);
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

int	c_arg(char *av)
{
	if (strcmp(av, "-c") == 0)
	{
		return (1);
	}
	return (0);
}

void	parse_args(int ac, char **av)
{
	int		i;
	int		j;
	int		c;
	int		f;

	i = 0;
	j = 0;
	c = 0;
	while (!c)
	{
		if (c_arg(av[i]) && !c)
		{
			while (av[i + 1][j])
			{
				j++;
			}
			c = 1;
		}
		else
		{
			f = open(av[i], O_RDONLY);
			if (f == -1)
			{
				no_file(av[i]);
				return ;
			}
			else
			{
				close(f);
				print_file(av[i]);
			}
		}
		i++;
	}
}