/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 17:24:11 by lgrudler          #+#    #+#             */
/*   Updated: 2018/11/14 16:55:27 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	int i;
	int stt;
	int j;
	int end;
	char *s2;

	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	stt = i;
	while (s[i] != '\0')
		i++;
	if ( i != 0)
		i--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	end = i;
	if (!(s2 = (char *)malloc(sizeof(stt) * (end - stt))))
		return (NULL);
	while (stt <= end)
	{
		s2[j] = s[stt];
		stt++;
		j++;
	}
	return (s2);

}

int	main()
{
	printf("%s\n", ft_strtrim("slau      u   "));
	return (0);
}
