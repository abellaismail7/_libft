/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:38:26 by iait-bel          #+#    #+#             */
/*   Updated: 2021/11/06 15:38:26 by iait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	char			*last;

	last = 0;
	uc = c;
	while (*s)
	{
		if (*s == uc)
			last = (char *) s;
		s++;
	}
	if (uc == 0)
		return ((char *) s);
	else
		return (last);
}
