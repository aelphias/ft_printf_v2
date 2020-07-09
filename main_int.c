/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:10:35 by aelphias          #+#    #+#             */
/*   Updated: 2020/07/09 11:56:15 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int main(void)
{
	int digit = 1;
	char *format = "%d";
	printf("---------------------------\n");
	printf("orig:\n");
	printf("\ncount:%d\n", printf(format, digit));
	printf("mine:\n");
	printf("\ncount:%d\n", ft_printf(format, digit));

	return(0);
} 
