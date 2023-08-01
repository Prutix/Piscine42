/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:39:34 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/18 16:03:29 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	b;

	i = 1;
	b = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		b *= i;
		i++;
	}
	return (b);
}

int	main(void)
{
	int	i = ft_iterative_factorial(-69);
	printf("%d", i);
}
