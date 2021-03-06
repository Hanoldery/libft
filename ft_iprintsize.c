/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iprintsize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 10:31:17 by pgerbaud          #+#    #+#             */
/*   Updated: 2017/12/08 17:25:50 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_iprintsize(intmax_t nbr)
{
	int		len;

	len = 0;
	while ((nbr = nbr / 10))
		len++;
	return (len);
}
