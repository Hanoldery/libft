/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgerbaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:18:44 by pgerbaud          #+#    #+#             */
/*   Updated: 2016/11/11 13:58:42 by pgerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"


int		count_words(char const *s, char c)
{
	int		nbr;

	nbr = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		nbr++;
		while (*s != c && *s)
			s++;
	}
	if (*(s - 1) == c)
		nbr--;
	return (nbr);
}

int		word_length(char *s, char c)
{
	int		length;

	length = 1;
	while (*s == c)
		s++;
	while (*s != c && *s++)
		length++;
	return (length);
}

char	**ft_strsplit(char const *s, char c)
{
	int		index;
	int		index2;
	char	**tab;

	if (!s || !c)
		return (NULL);
	index = 0;
	index2 = 0;
	tab = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	while (count_words(s, c) > 0)
	{
		while (*s == c)
			s++;
		tab[index] = (char *)malloc(sizeof(char) * (word_length((char *)s, c) + 1));
		while (*s != c && *s)
			tab[index][index2++] = *s++;
		tab[index][index2] = '\0';
		index2 = 0;
		index++;
	}
	tab[index] = NULL;
	return (tab);
}


	//printf("length + 1 : %d \n", lengthtab);
		//printf("first : %s\nword_length : %d index : %d  c : %c \n",s, word_length((char *)s, c), index, c);
			//printf("index : %d index2 : %d current : %c but : %c\n", index, index2, tab[index][index2 - 1], *(s - 1));
