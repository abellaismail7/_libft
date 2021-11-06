/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:13:21 by iait-bel          #+#    #+#             */
/*   Updated: 2021/11/06 15:13:21 by iait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;
	char			*str;

	str = (char *) s;
	uc = c;
	while (*str)
	{
		if (*str == uc)
			return (str);
		str++;
	}
	if (uc == 0)
		return (str);
	else
		return (0);
}
