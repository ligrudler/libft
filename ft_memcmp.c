/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:01:29 by lgrudler          #+#    #+#             */
/*   Updated: 2018/11/12 16:50:33 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;
	size_t i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] && str2[i] && (i < n))
	{
		if (str1[i] == str2[i])
			i++;
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	if (str1[i] != str2[i])
		return (str1[i] - str2[i]);	
	return (0);
}
