#include "../rush01.h"
#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*ft_parsing(char *str)
{
	int	*str_user;
	int	i;

	str_user = (int *) malloc(sizeof(int) * 16);
	i = 0;
	while (i <= str_len(str))
	{
		str_user[i] = str[i] - 48;
		i += 2;
	}
	return (str_user);
}
