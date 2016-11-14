/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 10:37:59 by pgerbaud          #+#    #+#             */
/*   Updated: 2016/11/11 11:18:07 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill(char *str, char const *s, int length, int del, int index)
{
	if (length < del)
		length = del + 1;
	str = (char *)malloc(length - del + 1);
	if (str)
	{
		index = 0;
		ft_bzero(str, length - del);
		while (del < length)
			*(str + index++) = *(s + del++);
		*(str + index) = '\0';
	}
	return (str);
}

char		*ft_strtrim(char const *s)
{
	int		length;
	int		index;
	int		del;
	char	*str;

	index = 0;
	del = 0;
	str = NULL;
	if (s)
	{
		length = ft_strlen(s);
		while ((*(s + index) == ' ' ||  *(s + index) == '\n' ||
					*(s + index) == '\t') && *(s + index++))
			del++;
		index = length - 1;
		while ((*(s + index) == ' ' ||  *(s + index) == '\n' ||
					*(s + index) == '\t') && index-- > 0)
			length--;
		if (del == 0)
			return ((char *)s);
		str = fill(str, s, length, del, index);
	}
	return (str);
}
