/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoimax.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 16:51:28 by pgerbaud          #+#    #+#             */
/*   Updated: 2018/01/08 18:17:33 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

intmax_t		ft_atoimax(const char *str)
{
	intmax_t	result;
	intmax_t	signe;

	signe = 1;
	result = 0;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	if (*str == '-')
	{
		signe = -signe;
		str++;
	}
	else
	{
		if (*str == '+')
			str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + (*str - 48);
		str++;
	}
	return (result * signe);
}
