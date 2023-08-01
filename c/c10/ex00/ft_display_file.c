/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:35:51 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/22 11:45:33 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

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

	while (c)
	{
		f = read(file, &c, sizeof(char));
		if (f)
			write(1, &c, 1);
		else
		{
			break ;
		}
	}
}

int	main(int argc, char **argv)
{
	int		f;

	if (argc == 1)
		return (puterror("File name missing.\n"));
	if (argc > 2)
		return (puterror("Too many arguments.\n"));
	if (argc == 2)
	{
		f = open(argv[1], O_RDONLY);
		if (f == -1)
			return (puterror("Cannot read file.\n"));
		else
			printfile(f);
	}
	close(f);
	return (0);
}
