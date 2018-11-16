/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:01:10 by lgrudler          #+#    #+#             */
/*   Updated: 2018/11/12 17:20:20 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{ 
	char *str;
	unsigned int i;
	size_t k;

	k = 0;
	i = 0;
	if(!(str = (char *)malloc(sizeof(char) * (len + 1))))
				return (NULL);
	while (i != start)
		i++;
	if (i == start)
	{
		while (k < len)
		{
			str[k] = s[i];
			i++;
			k++;
		}	
	}
	return (0);
}
