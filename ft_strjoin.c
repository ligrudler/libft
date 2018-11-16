/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:28:36 by lgrudler          #+#    #+#             */
/*   Updated: 2018/11/12 17:08:03 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int i;
	int j;

	j = 0;
	ft_strcat((char *)s1, s2);
	i = ft_strlen(s1);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (s1[j])
	{
		str[j] = s1[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
