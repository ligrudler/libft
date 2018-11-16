/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:49:53 by lgrudler          #+#    #+#             */
/*   Updated: 2018/11/10 13:01:35 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char *ft_strdup(const char *s)
{
	char *str;
	int i;

	i = 0;
	if (!(str = (char*)malloc((sizeof(*str) * (ft_strlen(s) + 1)))))
			return (0);
	while (s[i])
	{
		str[i] = s[i];
		i++;	
	}
	str[i] = '\0';
	return (str);
}
