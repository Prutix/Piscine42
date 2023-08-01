/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:52:17 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/26 08:44:53 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAIL_H
# define TAIL_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

char	**ft_split(char *str, char *charset);
void	parse_args(int ac, char **av);
int		ft_atoi(char *str);
void	put_str(char *str);
int		str_len(char *str);
void	no_file(char *file);

#endif