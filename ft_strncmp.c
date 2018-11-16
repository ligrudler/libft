/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:54:31 by lgrudler          #+#    #+#             */
/*   Updated: 2018/11/16 23:02:15 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*e;

	d = (unsigned char *)s1;
	e = (unsigned char *)s2;
	i = 0;
	while (d[i] && e[i] && (i < n))
	{
		if (d[i] == e[i])
			i++;
		if (d[i] != e[i])
			return (d[i] - e[i]);
	}
	if (d[i] != e[i])
		return (d[i] - e[i]);
	return (0);
}
