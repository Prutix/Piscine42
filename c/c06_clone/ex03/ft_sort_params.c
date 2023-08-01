/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:20:12 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/11 14:55:58 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	write(1, str, i);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ( *(unsigned char *)s1 - *(unsigned char *)s2 );
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*s;

	i = 1;
	while (argc > i)
	{
		j = i + 1;
		while (argc > j)
		{
			if(ft_strcmp(argv[i], argv[j]) > 1)
			{
				s = argv[i];
				argv[i] = argv[j];
				argv[j] = s;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (argc > i)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
