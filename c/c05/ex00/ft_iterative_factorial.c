/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:39:34 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/11 09:51:58 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	b;

	i = 0;
	b = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		b *= i;
	}
	return (b);
}