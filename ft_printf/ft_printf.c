/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 17:12:34 by aelphias          #+#    #+#             */
/*   Updated: 2020/07/01 19:48:51 by aelphias         ###   ########lyon.fr   */
/*              	                                                          */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_struct_printf(t_printf *myprintf)
{	
	ft_bzero(myprintf, sizeof(t_printf));
}

int ft_printf(const char *s, ...)
{ 
	int i;
	size_t k;
	size_t num_ch;
	t_printf myprintf;

	i = 0;
	k = 0;
	num_ch = 0;
	ft_init_struct_printf(&myprintf);
	myprintf.s = (char*)s;

	while (myprintf.s[k] != '\0')
	{ 
		if (myprintf.s[k] == '%' && myprintf.s[++k] == '%')
		{
			printf("{  1  }");
			write(1, "%", 1);
			num_ch++;
		}
		if (myprintf.s[k] == 'd')
		{	
			va_start(myprintf.args, s);
			myprintf.s = (char*)s;
			i = va_arg(myprintf.args, int);
			ft_putnbr(i);
			va_end(myprintf.args);
			k += 2;
		}
		else
		{
			while (myprintf.s[k] != '\0' && myprintf.s[k] != '%')
			{
				write(1,&(myprintf.s[k]),1);
				num_ch++;
				k++;
			}
		}
	}
	return (num_ch);
}
