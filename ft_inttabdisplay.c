/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inttabdisplay.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 17:36:31 by pgerbaud          #+#    #+#             */
/*   Updated: 2018/01/31 15:28:04 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_inttabdisplay(int *tab, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i++]);
		ft_putstr("\t");
	}
	ft_putstr("\n");
}
