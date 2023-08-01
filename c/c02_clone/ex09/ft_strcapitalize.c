/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:48:26 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/09 11:23:28 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	is_lowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	is_alpha(char c)
{
	if (is_lowcase(c) || is_upcase(c))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[i++])
	{
		if (is_upcase(str[i]))
			str[i] -= 32;
	}
	if (is_lowcase(str[0]))
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i])
	{
		if (!is_number(str[i - 1]) && !is_upcase(str[i - 1])
			&& is_lowcase(str[i]))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
