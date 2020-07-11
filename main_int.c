/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:10:35 by aelphias          #+#    #+#             */
/*   Updated: 2020/07/10 19:52:54 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int main(void)
{
	int digit = 42;
	char *format = "%d";
	int count = 0;
	int count2 = 0;

	count = ft_printf(format, digit);
	printf("\nmine:%d\n", count);
	printf("----\n");
	count2 = printf(format, digit);
	printf("\norig count:%d\n", count2);
	return(0);
} 
