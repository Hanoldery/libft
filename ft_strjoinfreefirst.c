/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfreefirst.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:12:04 by pgerbaud          #+#    #+#             */
/*   Updated: 2017/12/19 20:20:34 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strjoinfreefirst(char *s1, char *s2)
{
	int		length;
	int		index;
	char	*str;
	char	*tmp1;
	char	*tmp2;

	str = NULL;
	index = 0;
	tmp1 = s1;
	tmp2 = s2;
	if (!s1 && !s2)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(str = ft_strnew(length)))
		return (NULL);
	while (s1 && *s1)
		*(str + index++) = *s1++;
	while (s2 && *s2)
		*(str + index++) = *s2++;
	*(str + index) = '\0';
	(tmp1) ? free(tmp1) : NULL;
	return (str);
}