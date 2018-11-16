/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:28:36 by lgrudler          #+#    #+#             */
/*   Updated: 2018/11/16 22:53:39 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	k = 0;
	j = 0;
	i = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (s1[j])
	{
		str[j] = s1[j];
		j++;
	}
	while (s2[k])
	{
		str[j] = s2[k];
		j++;
		k++;
	}
	str[j] = '\0';
	return (str);
}
