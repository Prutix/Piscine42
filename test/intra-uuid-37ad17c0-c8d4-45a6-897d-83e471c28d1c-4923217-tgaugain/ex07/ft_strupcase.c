/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:58:48 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/07 11:43:24 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
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
		str[count] = str[count] - 32;
		count++;
	}
	return (str);
}
