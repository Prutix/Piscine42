/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:19:40 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/16 15:05:47 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	if (size < 1)
		return (c);
	while (i + 1 < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (dest[c])
		c++;
	return (c);
}
