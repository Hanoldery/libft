/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 14:42:36 by pgerbaud          #+#    #+#             */
/*   Updated: 2018/02/13 14:56:55 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_strtabdel(char ***as)
{
	int		i;
	char	**tab;

	tab = *as;
	i = 0;
	if (tab && *tab)
	{
		while (tab[i])
			free(tab[i++]);
		free(tab);
	}
	as = NULL;
}
