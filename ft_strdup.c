/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:55:05 by pgerbaud          #+#    #+#             */
/*   Updated: 2016/11/09 14:46:46 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	index;
	char	*s2;

	index = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(*s1) * (index + 1));
	index = 0;
	if (s2)
	{
		while (*(s1 + index) != '\0')
		{
			*(s2 + index) = *(s1 + index);
			index++;
		}
	}
	*(s2 + index) = '\0';
	return (s2);
}
