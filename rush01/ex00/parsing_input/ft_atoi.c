/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:08:37 by lmattern          #+#    #+#             */
/*   Updated: 2023/07/15 09:18:03 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*ft_parsing(char *str)
{
	char	*str_user
	
	int	str_user[16];
	int	i;

	i = 0;
	while (i <= str_len(str))
	{
		str_user[i] = str[i] - 48;
		i += 2;
	}
	return (str_user);
}
