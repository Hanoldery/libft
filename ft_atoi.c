/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 09:48:22 by pgerbaud          #+#    #+#             */
/*   Updated: 2016/11/10 10:14:51 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		result;
	int		signe;

	signe = 1;
	result = 0;
	while (*str == ' ' || ( 9 <= *str && *str <= 13))
		str++;
	if (*str == '-')
	{
		signe = -signe;
		str++;
	}
	if (*str == '+')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + (*str - 48);
		str++;
	}
	return (result * signe);
}