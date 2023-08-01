/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:25:30 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/06 09:54:35 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}

/*int	main(void)
{
	int	*a, *b, c, d;

	c = 45;
	d = 18;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a, b);
	printf("%d, %d", *a, *b);
}*/
