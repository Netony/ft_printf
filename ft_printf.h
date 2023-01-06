/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:50:57 by dajeon            #+#    #+#             */
/*   Updated: 2023/01/06 14:41:43 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_putnbr_base(const long n, char *base);
int	ft_putnbr_base_u(const unsigned long u, char *base);
int	ft_putstr(const char *s);

int ft_putchar(const char c);
int	ft_abs(const int n);

#endif
