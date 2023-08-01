/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:58:28 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/21 11:02:58 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*a;
	int		i;

	i = 0;
	while (src[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	a = str;
	while (*src)
		*a++ = *src++;
	*a = '\0';
	return (str);
}
