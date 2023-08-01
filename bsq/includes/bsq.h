/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:23:49 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/24 13:45:32 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char	**ft_split(char *str, char *charset);
int		check_map(char *file);
void	put_str(char *str);
char	**get_file(char *file);
int		ft_atoi(char *str);
int		get_y(char **tab);
char	get_empty(char **tab);

#endif