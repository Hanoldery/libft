/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 23:36:14 by pgerbaud          #+#    #+#             */
/*   Updated: 2016/11/09 23:37:01 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		index;

	index = 0;
	while (*(s1 + index) == *(s2 + index) && *(s1 + index) && *(s2 + index) &&
			index < n)
		index++;
	return (*((unsigned char *)s1 + index) - *((unsigned char *)s2 + index));
}
