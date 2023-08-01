/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:04:42 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/25 14:47:53 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_cat.h"

int	puterror(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	write(2, s, i);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printfile(int file)
{
	char	c;
	int		f;
	char	buf[2];

	c = 'a';
	while (c != '\0')
	{
		f = read(file, buf, 1);
		if (f)
			write(1, &buf[0], 1);
		else
		{
			break ;
		}
	}
}
