/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 18:00:55 by pgerbaud          #+#    #+#             */
/*   Updated: 2018/01/31 15:27:22 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isnumber(char *str)
{
	int		i;

	i = -1;
	while (++i < (int)ft_strlen(str))
		if (!ft_strchr(" 0123456789", str[i]) &&
				!(ft_strchr("-+", str[i]) && str[i - 1] == ' ' &&
					ft_strchr(" 0123456789", str[i + 1])))
			return (0);
	return (1);
}
