/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:00:33 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/19 16:40:48 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	strs_len(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		l;
	char	*str;

	i = 0;
	j = 0;
	l = 0;
	str = malloc(sizeof(char *) * (strs_len(strs) * str_lenght(sep)
				+ strs_len(strs)));
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[l++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
			str[l++] = sep[j++];
		i++;
	}
	str[l] = '\0';
	return (str);
}

int	main(int argc, char **argv)
{
	char *strs[] = {"aaa","bbb","ccc","ddd", "aaa", "aasda", "dtew", "adewtwyh", "hrtikty"};
	printf("%s", ft_strjoin(argc, argv, "                 "));
}
