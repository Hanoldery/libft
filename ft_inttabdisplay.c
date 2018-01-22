/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inttabdisplay.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 17:36:31 by pgerbaud          #+#    #+#             */
/*   Updated: 2018/01/17 18:45:08 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void		ft_inttabdisplay(int *tab, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		printf("%d\t", tab[i++]);
		//ft_putnbr(tab[i++]);
		//ft_putchar('\n');
	}
	printf("\n");
}
