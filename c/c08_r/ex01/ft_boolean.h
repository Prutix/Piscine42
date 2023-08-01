/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:36:24 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/14 08:42:54 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H

# include <unistd.h>

# define FALSE	0
# define TRUE	1
# define SUCCESS	1
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments. \n"
# define EVEN(a)	a % 2 == 0

typedef int	t_bool;

#endif
