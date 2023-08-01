/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:26:23 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/09 15:35:14 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_i;
	int	i;

	i = 0;
	dest_i = 0;
	while (dest[dest_i] != '\0')
	{
		dest_i++;
	}
	while (src[i] != '\0')
	{
		dest[i + dest_i] = src[i];
		i++;
	}
	dest[dest_i + i] = '\0';
	return (dest);
}
