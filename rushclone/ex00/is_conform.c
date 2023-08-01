#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "rush01.h"

void	ft_print_error(void)
{
	char	*str_error;
	int		i;

	i = 0;
	str_error = "Error";
	while (str_error[i])
	{
		ft_putchar(str_error[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	*is_conform(char **argv)
{
	int		i;
	int		*res;
	char	copy_tab[16];

	i = 0;
	while (argv[1][i++])
	{
		if (is_number(argv[1][i]))
			copy_tab[i] = argv[1][i];
	}
	copy_tab[i] = '\0';
	i = 0;
	while (copy_tab[i++])
	{
		if (copy_tab[i] < '0' && copy_tab[i] > '4')
		{
			ft_print_error();
			return (0);
		}
	}
	res = (int *)malloc(sizeof(int) * i);
	i = 0;
	while (copy_tab[i++])
		res[i] = (copy_tab[i] - '0');
	return (res);
}
