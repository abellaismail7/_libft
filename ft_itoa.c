/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:06:00 by iait-bel          #+#    #+#             */
/*   Updated: 2021/11/06 15:06:00 by iait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	nbr_size(int nbr)
{
	int	i;

	i = 1;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int		i;
	int		is_neg;
	char	*result;

	is_neg = nbr < 0;
	i = (nbr <= 0) + nbr_size(nbr);
	result = malloc(sizeof(char) * i);
	if (result == 0)
		return (0);
	result[0] = '-';
	result[--i] = 0;
	if (!is_neg)
		nbr *= -1;
	while (--i >= is_neg)
	{
		result[i] = (nbr % 10 * -1) + '0';
		nbr /= 10;
	}
	return (result);
}
