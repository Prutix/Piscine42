/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:48:26 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/10 07:52:17 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_upcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	is_lowcase(char c)
{
	if (c >= 'a' && c <= 'z')
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
	if (is_upcase(c) || is_lowcase(c))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_upcase(str[i]))
			str[i] += 32;
		i++;
	}
	if (is_lowcase(str[0]))
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i])
	{
		if ((str[i - 1] == ' ' || (!is_number(str[i - 1])
					&& !is_alpha(str[i - 1]))) && is_lowcase(str[i]))
			str[i] -= 32;
		else if (is_upcase(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

/*int main()
{
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(s));
}*/
