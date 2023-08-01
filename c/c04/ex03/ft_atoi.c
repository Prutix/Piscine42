/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:07:07 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/11 11:14:22 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_space(char c)
{
	if (c == 32)
		return (1);
	else
		return (0);
}

int	is_nbr(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int		i;
	int		m;
	int		f;

	i = 0;
	m = 1;
	f = 0;
	while (str[i] != '\0')
	{
		if (is_space(str[i]) || str[i] == '+')
		{
			i++;
			continue ;
		}
		else if (str[i] == '-')
			m *= -1;
		else if (!is_nbr(str[i]))
			break ;
		else
			f = f * 10 + str[i] - '0';
		i++;
	}
	f *= m;
	return (f);
}

/*int	main(void)
{
	char *s = " +++--2344kgdfk//";
	int i = ft_atoi(s);
	printf("%d", i);
}*/
