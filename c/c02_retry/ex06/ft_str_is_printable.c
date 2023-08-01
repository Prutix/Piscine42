/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:49:05 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/07 09:53:03 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
		if (32 <= str[i] && str[i] <= 126)
			t = 1;
		else
			return (0);
		i++;
	}
	if (t == 1)
		return (1);
	return (1);
}
