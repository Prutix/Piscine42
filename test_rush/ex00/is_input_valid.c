/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_input_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmattern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:57:01 by lmattern          #+#    #+#             */
/*   Updated: 2023/07/16 19:49:20 by lmattern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_input_valid(char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 1;
	len = 0;
	while (argv[1][len])
	{
		len++;
	}
	if (len != 31)
	{
		return (0);
	}
	while (i < 32)
	{
		if ((argv[1][i] < '1') && (argv[1][i] > '4'))
			return (0);
		if (argv[1][j] != ' ' && j < 31)
			return (0);
		i = i + 2;
		j = j + 2;
	}
	return (1);
}
