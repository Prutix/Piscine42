/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:04:51 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/25 14:43:04 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>
# include <libgen.h>

int		puterror(char *s);
void	ft_putchar(char c);
void	printfile(int file);

#endif