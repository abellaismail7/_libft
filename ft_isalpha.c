/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-bel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:04:08 by iait-bel          #+#    #+#             */
/*   Updated: 2021/11/06 15:04:08 by iait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	is_upp;
	int	is_low;

	is_upp = (c >= 'A' && c <= 'Z');
	is_low = (c >= 'a' && c <= 'z');
	return (is_upp || is_low);
}
