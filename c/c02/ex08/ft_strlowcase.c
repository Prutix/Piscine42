/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:45:19 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/09 16:38:12 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_low(char c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}

int	is_up(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		if (is_low(str[count]))
		{
			count++;
			continue ;
		}
		else if (is_up(str[count]))
			str[count] += 32;
		count++;
	}
	return (str);
}
