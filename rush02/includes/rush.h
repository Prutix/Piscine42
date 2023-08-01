/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:05:16 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/23 09:21:53 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# define DICT "numbers.dict"

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_list
{
	int		nb;
	char	*str;
}	t_list;

char			*only_char(char *str);
int				ft_atoi(char *str);
void			ft_putstr(char *str, int a);
int				get_lenght_file(int file);
char			*write_file(int size);
char			**ft_split(char *str, char *charset);
struct s_list	*parse(char *str);
void			write_nb(int nb);
int				*get_nbr(int nb);

#endif