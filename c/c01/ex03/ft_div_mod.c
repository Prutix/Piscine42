/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 08:52:43 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/06 09:23:46 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a, b, div, mod, *c, *d;

	c = &div;
	d = &mod;
	a = 12;
	b = 7;
	ft_div_mod(a, b, c, d);
	printf("%d, %d", div, mod);
}*/
