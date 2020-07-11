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

void	ft_init_struct_printf(t_printf *myprintf, char *s)
{	
	ft_bzero(myprintf, sizeof(t_printf));
	myprintf->s = s;
}

int	ft_parse_flags(t_printf *myprintf)
{
	if (*(myprintf->s) == 'd')
	{
		/* code */
	}
	return (0);	
}
int	ft_parse_format_args(t_printf *myprintf)
{
	if (*(myprintf->s) == '%')
		{
			
			if (*++(myprintf->s) == 'd' || *(myprintf->s) == 'i')
			{	
				myprintf->all_len += ft_putnbr(va_arg(myprintf->args, int));
				*(myprintf->s)++;
			}
			else if (*(myprintf->s) == '%')
			{
				write(1, "%", 1);
				myprintf->all_len++;
				*(myprintf->s)++;
			}
		}
		else
		{
			if (*(myprintf->s) != '\0' && *(myprintf->s) != '%')
			{
				write(1, myprintf->s, 1);
				myprintf->all_len++;
				*(myprintf->s)++;
			}
		}
}

int ft_printf(const char *s, ...)
{ 
	t_printf myprintf;

	ft_init_struct_printf(&myprintf, (char*)s);
	va_start(myprintf.args, s);
	ft_parse_format_args(&myprintf);
	va_end(myprintf.args);
	return (myprintf.all_len);
}

/* if (myprintf->s[k] == '%' && myprintf->s[++k] == '%')
		{
			printf("{  1  }");
			write(1, "%", 1);
			num_ch++;
		}
		if (myprintf->s[k] == 'd')
		{	
			va_start(myprintf->args, s);
			myprintf->s = (char*)s;
			i = va_arg(myprintf->args, int);
			ft_putnbr(i);
			va_end(myprintf->args);
			k += 2;
		}
		else
		{
			while (myprintf->s[k] != '\0' && myprintf->s[k] != '%')
			{
				write(1,&(myprintf->s[k]),1);
				num_ch++;
				k++;
			}
		} */