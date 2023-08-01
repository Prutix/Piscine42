/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:48:20 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/09 15:52:27 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compare(char *X, char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y ==  '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if ((*str == *to_find) && compare(str, to_find))
			return (str);
		str++;
	}
	return 0;
}
