/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_standard.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 17:56:26 by pgerbaud          #+#    #+#             */
/*   Updated: 2018/02/01 18:00:15 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_read_standard(int buff_size)
{
	char	buff[buff_size];
	char	*rslt;
	int		r;
	int		max;

	r = 0;
	rslt = NULL;
	max = 0;
	while ((r = read(0, buff, buff_size)) > 0)
	{
		buff[r] = '\0';
		rslt = ft_strjoinfreefirst(rslt, buff);
	}
	if ((int)ft_strlen(rslt) == 0 || r < 0)
		return ((char *)NULL);
	return (rslt);
}
