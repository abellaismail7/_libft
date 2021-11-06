/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:07:15 by iait-bel          #+#    #+#             */
/*   Updated: 2021/11/06 15:07:15 by iait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char			*_dst;
	char			*_src;
	unsigned int	i;

	if (dst == 0 && src == 0)
		return (0);
	_dst = (char *) dst;
	_src = (char *) src;

	if (_dst > _src)
	{
		i = n;
		while (i--)
		{
			_dst[i] = _src[i];
		}
	}
	else {
		i = 0;
		while (i < n)
		{
			_dst[i] = _src[i];
			i++;
		}
	}
	return (dst);
}
