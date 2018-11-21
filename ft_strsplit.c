/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 17:18:19 by lgrudler          #+#    #+#             */
/*   Updated: 2018/11/21 16:05:43 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
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
		else
		{
			mot++;
			check = 0;
		}
		i++;
	}
	return (mot);
}	

char	**is_whitespaces(const char *s, int mot, char c, char **tab)
{
	unsigned int start;
	size_t k;
	int j;
	int i;

	i = 0;
	j = -1;
	st = ft_strchr(*s, c);

	while (++j < mot)
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] != c)
		   i++;	
		tab[j] = ft_strsub(s, k, i);
		while (s[i] == c)
		{
			i++;
			if (s[i] == '\0')
				tab[j + 1] = 0;
		}
	}
	tab[j] = 0;
	return (tab);
}

char **ft_strsplit(char const *s, char c)
{
	int mot;
	char **tab;

	mot = ft_count_words(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * mot + 1)))
		return (0);
	is_whitespaces(s, mot, c, tab);
	return (tab);
}
