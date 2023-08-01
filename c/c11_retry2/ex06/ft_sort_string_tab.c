/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:42:12 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/20 13:16:13 by tgaugain         ###   ########.fr       */
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

int	lenght(char **s)
{
	int	l;

	l = 0;
	while (*s++)
		l++;
	return (l);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*t;

	j = 0;
	i = 0;
	t = 0;
	while (i < lenght(tab) - 1)
	{
		while (j < lenght(tab) - i - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				t = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = t;
			}
			j++;
		}
		i++;
	}
}
