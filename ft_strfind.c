

#include "libft.h"

int		ft_strfind(char *str, char c)
{
	int		i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != c)
		i++;
	return (i);
}
