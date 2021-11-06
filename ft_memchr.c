/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:28:15 by iait-bel          #+#    #+#             */
/*   Updated: 2021/11/06 15:28:15 by iait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	uc;
	unsigned char	*str;

	str = (unsigned char *) s;
	uc = c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return (str + i);
		i++;
	}
	if (c == 0 && n != 0)
		return (str + i);
	else
		return (0);
}
