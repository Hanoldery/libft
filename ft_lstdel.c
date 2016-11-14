/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Pierre <Pierre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 18:27:07 by Pierre            #+#    #+#             */
/*   Updated: 2016/11/14 18:32:00 by Pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	ft_lstdel(t_list **alst, void (*del)(void *,size_t))
{
	t_list	*lst;
	t_list	*temp;

	if (!alst || !del)
		return;
	temp = NULL;
	lst = *alst;
	while (*alst)
	{
		temp = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = temp;
	}
	lst = NULL;
}
