/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:19:20 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/20 13:17:32 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lenght(char **s)
{
	int	l;

	l = 0;
	while (*s++)
		l++;
	return (l);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*t;

	i = 0;
	while (i < lenght(tab) - 1)
	{
		j = 0;
		while (j < lenght(tab) - i - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
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
