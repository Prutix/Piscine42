/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:39:52 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/08 15:46:12 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_i;
	unsigned int	i;

	i = 0;
	dest_i = 0;
	while (dest[dest_i] != '\0')
	{
		dest_i++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[dest_i + i] = src[i];
		i++;
	}
	dest[dest_i + i] = '\0';
	return (dest);
}
