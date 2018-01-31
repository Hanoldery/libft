/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inttabfind.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 17:20:41 by pgerbaud          #+#    #+#             */
/*   Updated: 2018/01/11 18:07:44 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_inttabfind(int *tab, int size, int nbr)
{
	int		i;

	i = -1;
	while (++i < size)
		if (tab[i] == nbr)
			return (i);
	return (-1);
}
