/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:10:35 by aelphias          #+#    #+#             */
/*   Updated: 2020/07/20 20:28:17 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <string.h>

int main(void)
{
	int digit = 42;
	char *format = "%-d";
	ft_printf(format, digit);
	// printf(format, digit);
	return(0);
} 


/*int digit = 42;
	char format[8000000 + 1] = "Hello";
	int count = 0;
	int count2 = 0;

	memset(format,'+', 8000000);
	format[8000000] = '\0';
	ft_printf(format, digit);*/
