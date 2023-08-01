/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:42:48 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/07 11:37:12 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	count;
	int	t;

	i = 0;
	count = 0;
	t = 1;
	while (str[count])
	{
		count++;
	}
	if (count == 0)
		return (1);
	while (i != count)
	{
		if (65 <= str[i] && str[i] <= 90)
			t = 1;
		else
			return (0);
		i++;
	}
	if (t == 1)
		return (1);
	return (1);
}
