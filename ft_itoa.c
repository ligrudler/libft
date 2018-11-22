/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 23:01:53 by lgrudler          #+#    #+#             */
/*   Updated: 2018/11/22 22:12:09 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*nbrstr(int n, char **str, int i)
{
	if (n > 0)
	{
		i++;
		nbrstr(n / 10, str, i);
		*(str[i]) = (n % 10 + '0');
	}
}
char	*ft_itoa(int n)
{
	char *str;
	int len;
	int i;
	
	i = n;
	len = 0;
	while (i /= 10)
		len++;
	i = 0;
	if (n < 0)
		len++;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
			return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		i++;
		n = -n;
	}
	str = nbrstr(n, &str, i);
	str[len + 1] = '\0';
	return (str);
}

int main(int argc, char **argv)
{
	printf("%s", ft_itoa(atoi(argv[1])));
	return (0);	
}
