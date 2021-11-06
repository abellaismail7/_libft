/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:24:00 by iait-bel          #+#    #+#             */
/*   Updated: 2021/11/06 15:24:00 by iait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_calloc(unsigned int count, unsigned int size)
{
	char	*mem;
	int		i;
	int		len;

	len = count * size;
	i = 0;
	mem = malloc(len);
	if (mem == 0)
		return (0);
	while (i < len)
		mem[i++] = 0;
	return (mem);
}
