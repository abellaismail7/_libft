/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:17:29 by iait-bel          #+#    #+#             */
/*   Updated: 2021/11/06 15:17:29 by iait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l_src;
	unsigned int	l_dest;

	l_src = ft_strlen(src);
	l_dest = ft_strlen(dest);
	j = 0;
	if (size == 0 || size <= l_dest)
		return (l_src + size);
	i = l_dest;
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = 0;
	return (l_dest + l_src);
}
