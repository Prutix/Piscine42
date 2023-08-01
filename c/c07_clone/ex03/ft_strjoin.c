/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:00:33 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/16 11:03:37 by tgaugain         ###   ########.fr       */
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		l;
	char	*str;

	i = 0;
	j = 0;
	l = 0;
	str = malloc(sizeof(strs));
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

/*int	main(void)
{
	char *strs[] = {"aaa","bbb","ccc","ddd"};
	printf("%s", ft_strjoin(4, strs, "|"));
}*/
