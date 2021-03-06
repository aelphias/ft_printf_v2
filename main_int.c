/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:10:35 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/02 20:32:52 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <string.h>

int main(void)
{
	int digit = 1;
	int cnt1 = 0;
	int cnt2 = 0;
	char *format = "% -4d|";
	cnt1 = ft_printf(format, digit);
	printf("\nmy_length: %d\n", cnt1);
	printf("\n----------orig:\n");
	cnt2 = printf(format, digit);
	printf("\norig_length: %d\n", cnt2);
	return(0); 
} 

/*   int	main(void)
  {
	  
	int digit = 42;
	char format[8000 + 1] = "Hello";
	memset(format,'+', 8000);
	format[8001] = '\0';
	ft_printf(format, digit);
	return (0);
  } */
