/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:42:57 by pgerbaud          #+#    #+#             */
/*   Updated: 2016/11/11 22:43:26 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		index;

	index = 0;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ft_bzero(str, size + 1);
	while (index < size)
		*(str + index++) = '\0';
	*(str + index) = (unsigned char)0;
	return (str);
}
