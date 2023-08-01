/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:45:19 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/07 11:47:16 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		if (65 <= str[count] && str[count] <= 90)
		{
			count++;
			continue ;
		}
		str[count] = str[count] + 32;
		count++;
	}
	return (str);
}
