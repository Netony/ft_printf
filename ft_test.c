/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:13:35 by dajeon            #+#    #+#             */
/*   Updated: 2023/01/06 10:32:21 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(void)
{
	int	a;
	// printf("%d\n", (int)write(1, NULL, 2)); 라이트 개수
	// printf("%d\n", printf("%c", NULL)); 에러 
	/*
	printf("%d\n", printf("%c%d%d\n", 112)); // 인수 부족
	printf("%d\n", printf("%c\n", 112, 521)); // 인수 초과
	printf("%d\n", printf("%p\n", 152)); // 인수 초과
	printf("%d\n", printf("%p\n", &a)); // 인수 초과
	return (0);
	*/
	a = 152;
	printf("%d\n", printf("%c%d\n", (a < 0) * '-', a));
	printf("%d\n", printf("%d\n", -152));
	printf("%d\n", printf("%d\n", 152));
	
	return (0);
}

// 인수가 부족하면, 
