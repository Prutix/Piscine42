/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:22:47 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/07 09:33:19 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	count;
	int	t;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	i = 0;
	t = 1;
	if (count == 0)
		return (1);
	while (i != count)
	{
		if ('0' <= str[i] && str[i] <= '9')
			t = 1;
		else
			return (0);
		i++;
	}
	if (t == 1)
		return (1);
	return (1);
}
