/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:56:58 by dajeon            #+#    #+#             */
/*   Updated: 2023/01/06 14:05:05 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(const long n, char *base)
{
	int		size;
	int		sign;
	int		count;
	int		temp;
	char	c;

	count = 0;	
	size = ft_strlen(base);
	sign = 1 * (n >= 0) + -1 * (n < 0);
	if (n / size != 0)
	{
		temp = ft_putnbr_base(n / size, base);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	else if (n < 0)
		count += ft_putchar('-');
	c = base[ft_abs(n % size)];
	temp = ft_putchar(c);
	if (temp == -1)
		return (-1);
	count += temp;
	return (count);
}
