/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:17:49 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/07 13:55:02 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;
	int	t;
	int	i;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	i = 0;
	t = 1;
	while (i != count)
	{
		if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
			t = 1;
		else
			return (0);
		i++;
	}
	return (t);
}
