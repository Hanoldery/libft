/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:03:23 by pgerbaud          #+#    #+#             */
/*   Updated: 2016/11/11 22:20:29 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include "string.h"
#include <stdlib.h>
#include <ctype.h>
int		main(int argc, char *argv[])
{
	int		test_memset;
	char	test_memsetchar[] = "ici je test";
	void	*str = "coucou";

	void	*strr;
	strr = "ma str";

	test_memset = 0;

	if (argc < 2)
		return (0);

	if (argv[1][0] == '1' && argv[1][1] == '1')
	{
		printf("------- ft_putnbr -------\n");
		ft_putnbr(-123);
	}

	if (argv[1][0] == '1' && argv[1][1] == '0')
	{
		printf("------- ft_itoa -------\n");
		printf("\nr%s\n",ft_itoa(-4067294));
		printf("\nr%s\n",ft_itoa(-2147483647 - 1));
		printf("\nr%s\n",ft_itoa(-2147483647 - 1));

		printf("\nr%s\n",ft_itoa(-1234));
		printf("\nr%s\n",ft_itoa(8859));
		printf("\nr%s\n",ft_itoa(0));
	}

	if (argv[1][0] == '0' && argv[1][1] == '0')
	{
		printf("------- ft_memset -------\n");
		printf("%s\n", test_memsetchar);
		printf("%s",ft_memset(str, 'c', 7));
	}

	if (argv[1][0] == '0' && argv[1][1] == '1')
	{
		printf("------ ft_strchr --------\n");
		printf("%s\n%s", "coucou", ft_strchr("",111));
	}
	
	if (argv[1][0] == '0' && argv[1][1] == '2')
	{
		printf("------ ft_strstr --------\n");
		printf("false  %s\n", ft_strnstr("MZIRIBMZIRIBMZE123","MZIRIBMZE", strlen("MZIRIBMZE")));
		printf("true   %s\n",  strnstr("MZIRIBMZIRIBMZE123","MZIRIBMZE", strlen("MZIRIBMZE")));
	}
	
	if (argv[1][0] == '0' && argv[1][1] == '3')
	{
		printf("------ ft_atoi --------\n");
		printf("%s%d\n", "mine", ft_atoi("-11i1"));
		printf("%s%d\n", "mine", atoi("-11i1"));
	}

	if (argv[1][0] == '0' && argv[1][1] == '4')
	{
		printf("------ ft_atoi --------\n");
		test_memset = 0;
		while (test_memset < 530)
		{
			printf("%d %s%d   ", test_memset, "mine", ft_isalpha(test_memset));
			printf("%s%d\n", "true", isalpha(test_memset));
			test_memset++;
		}
	}
	
	if (argv[1][0] == '0' && argv[1][1] == '5')
	{
		printf("------ ft_atoi --------\n");
		printf("%s%d\n", "mine", *(int *)(ft_memalloc(10)));
	}

	if (argv[1][0] == '0' && argv[1][1] == '6')
	{
		printf("------ ft_strnequ --------\n");
		printf("%s  %d\n", "mine", ft_strnequ("ANCAT INSIDE", "ANCAT INSIDE", strlen("ANCAT INSIDE") - 1));
	}

	if (argv[1][0] == '0' && argv[1][1] == '7')
	{
		printf("------ ft_strjoin --------\n");
		printf("%s  %s\n", "mine", ft_strjoin("ANCAT INSIDE", "ANCAT INSIDE"));
	}

	if (argv[1][0] == '0' && argv[1][1] == '8')
	{
		printf("------ ft_strtim --------\n");
		printf("%s  %s\n", "mine", ft_strtrim("  \t\n \n "));
	}

	if (argv[1][0] == '0' && argv[1][1] == '9')
	{
		printf("------ ft_strsplit --------\n");
		char **str;
		int	index = 0;
		str = ft_strsplit("      split       this for   me  !         ", ' ');
		if (str && *str)
			while (str[index])
			{
				printf("%d : %s %d ", index, str[index], *str[index]);
				index++;
			}
	}
}
