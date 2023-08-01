/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:36:22 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/07 09:41:20 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	count;
	int	t;

	i = 0;
	count = 0;
	t = 1;
	while (str[count] != '\0')
	{
		count++;
	}
	if (count == 0)
		return (1);
	while (i != count)
	{
		if (97 <= str[i] && str[i] <= 122)
			t = 1;
		else
			return (0);
		i++;
	}
	if (t == 1)
		return (1);
	return (1);
}
