/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 23:02:33 by pgerbaud          #+#    #+#             */
/*   Updated: 2016/11/09 23:27:19 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		index;
	int		index2;
	int		littlelen;

	index = 0;
	index2 = 0;
	littlelen = ft_strlen(little);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (*(big + index) && index < len)
	{
		while (*(big + index + index2) == *(little + index2)
				&& index2 < littlelen && index2 + index < len)
			index2++;
		if ((index2 == len || index2 == littlelen) && len != 0)
			return ((char *)(big + index));
		index2 = 0;
		index++;
	}
	return (NULL);
}
