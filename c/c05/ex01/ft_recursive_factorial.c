/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:01:40 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/11 10:02:10 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial_recur(int i, int n)
{
	if (i == 0)
		return (n);
	if (i >= 0)
		return (ft_recursive_factorial_recur(i - 1, n * i));
	return (0);
}

int	ft_recursive_factorial(int nb)
{
	return (ft_recursive_factorial_recur(nb, 1));
}
