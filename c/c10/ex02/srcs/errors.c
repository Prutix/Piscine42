/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 08:40:19 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/26 08:45:17 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tail.h"

void	no_file(char *file)
{
	put_str("cannot read file '");
	put_str(file);
	put_str("': ");
	put_str(strerror(2));
	put_str("\n");
}