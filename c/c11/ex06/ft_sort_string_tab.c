/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:42:12 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/18 13:18:37 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	char	*t;

	i = 0;
	while (tab[i + 1])
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			t = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = t;
		}
		i++;
	}
}

/*int	main(int argc, char **argv)
{
	int	i;
	
	ft_sort_string_tab(argv);
	i = 0;
	while (i <= argc)
	{
		printf("%s ", argv[i]);
		i++;
	}
}*/