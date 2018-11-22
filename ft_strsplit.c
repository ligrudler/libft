/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 17:18:19 by lgrudler          #+#    #+#             */
/*   Updated: 2018/11/22 16:31:24 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int i;
	int mot;
	int check;

	i = 0;
	mot = 0;
	check = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			check = 1;
		if (s[i] != c && check == 1)
		{
			mot++;
			check = 0;
		}
		i++;
	}
	return (mot);
}

int		ft_count_letters(const char *s, char c, int i)
{
	int k;

	k = 0;
	while (s[i] != c)
	{
		k++;
		i++;
	}
	return (k);
}

char	**ft_strsplit(char const *s, char c)
{
	int		mot;
	int		i;
	char	**tab;
	int		k;
	int		j;

	j = 0;
	i = 0;
	mot = ft_count_words(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * mot + 1)))
		return (0);
	while (s[i] && j < mot)
	{
		while (s[i] == c)
			i++;
		k = ft_count_letters(s, c, i);
		tab[j] = ft_strsub(s, i, k);
		while (s[i] != c)
			i++;
		j++;
		i++;
	}
	tab[j] = 0;
	return (tab);
}
