/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:14:53 by lgrudler          #+#    #+#             */
/*   Updated: 2018/11/10 12:56:25 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	i = 0;
	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dest;
	if (str1[n] == '\0')
	{
		while (str1[i])
		{
			str2[i] = str1[i];
			i++;
		}
		str2[i] = '\0';
		str2 = (void *)str1;
		return (dest);
	}
	while (str1[n - 1] >= str1[0])
	{
		str2[n - 1] = str1[n - 1];
		n--;
	}
	dest = (void *)str2;
	return (dest);
}
