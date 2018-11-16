/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:18:54 by lgrudler          #+#    #+#             */
/*   Updated: 2018/11/13 23:34:04 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int i;
	int neg;
	int nbr;

	neg = 0;
	i = 0;
	nbr = 0;
	while (nptr[i] == ' ' || nptr[i] == '\r' || nptr[i] == '\t')
		i++;
	while (nptr[i] < '!')
		i++;
	if (nptr[i] == '-')
		neg = 1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{	
		nbr = nbr * 10;
		nbr = nbr + nptr[i] - '0';
		i++;
	}
	return (neg == 1 ? -nbr : nbr);
}
