/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaugain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:50:48 by tgaugain          #+#    #+#             */
/*   Updated: 2023/07/27 12:54:42 by tgaugain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     str_lenght(char *str)
{
        int     i;

        i = 0;
        while (str[i])
                i++;
        return (i);
}

int     strs_len(char **strs)
{
        int     i;
        int     res;

        i = 0;
        res = 0;
        while (strs[i])
        {
                res += str_lenght(strs[i]);
                i++;
        }
        return (res);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
        int             i;
        int             j;
        int             l;
        char    *str;

        i = 0;
        j = 0;
        l = 0;
        str = malloc(sizeof(char *) * (strs_len(strs) * str_lenght(sep)
                                + strs_len(strs)));
        while (i < size)
        {
                j = 0;
                while (strs[i][j])
                {
                        str[l++] = strs[i][j];
                        j++;
                }
                j = 0;
                while (sep[j] && i != size - 1)
                        str[l++] = sep[j++];
                i++;
        }
        str[l] = '\0';
        return (str);
}

int   main(void)
{
        char *strs[] = {"aaa","bbb","ccc","ddd"};
		char *s = ft_strjoin(4, strs, "aklmfmdklgndflkgndlfkgnfkldngdklfgdfgdfgdfgdgdfdfg54fdfd5");
        printf("%s", s);
		free(s);
}

