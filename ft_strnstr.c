/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:10:27 by lgrudler          #+#    #+#             */
/*   Updated: 2018/11/16 20:31:59 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *d;
	char *e;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	e = (char *)needle;
	d = (char *)haystack;
	if (e[0] == '\0')
		return ((char *)haystack);
	if(((size_t)ft_strlen((char *)needle)) > len)
		return (NULL);
	while (d[i])
	{
		if (d[i] == e[j])
		{
			while (d[i + j] == e[j])
			{
				if (e[j + 1] == '\0')
					return (&d[i]);
				if (i + j >= len)
					return (0);
				j++;
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
