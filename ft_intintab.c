/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intintab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 14:03:22 by pgerbaud          #+#    #+#             */
/*   Updated: 2018/02/07 14:05:46 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intintab(int *tab, int size, int nbr)
{
	int		i;

	i = -1;
	if (!size || size < 0)
		return (-1);
	while (++i < size)
		if (tab[i] == nbr)
			return (i);
	return (-1);
}
