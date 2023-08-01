/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:58:28 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/16 10:43:19 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*a;
	int		i;

	i = 0;
	while (src[i])
		i++;
	str = malloc(i + 1);
	a = str;
	while (*src)
		*a++ = *src++;
	*a = '\0';
	return (str);
}