/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:55:03 by dajeon            #+#    #+#             */
/*   Updated: 2023/01/06 14:05:12 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_u(const unsigned long u, char *base)
{
	size_t	size;
	int		count;
	int		temp;
	char	c;

	count = 0;	
	size = ft_strlen(base);
	if (u / size != 0)
	{
		temp = ft_putnbr_base(u / size, base);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	c = base[u % size];
	temp = ft_putchar(c);
	if (temp == -1)
		return (-1);
	count += temp;
	return (count);
}
