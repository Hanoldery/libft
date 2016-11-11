/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:30:04 by pgerbaud          #+#    #+#             */
/*   Updated: 2016/11/10 18:55:22 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		length;
	size_t		index;
	size_t		index2;

	index = 0;
	index2 = n;
	if (s1 && s2)
	{
		if (!*s1 && !*s2)
			return (1);
		length = ft_strlen(s1);
		if (length == ft_strlen(s2) || (n <= length && n <= ft_strlen(s2)))
			while (*s1 && *s2 && n-- > 0)
				if (*s1++ == *s2++)
						index++;
		if (index2 == index)
			return (1);
	}
	return (0);
}
