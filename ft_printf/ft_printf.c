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

void	ft_init_struct_printf(t_printf *data, char *s)
{	
	ft_bzero(data, sizeof(t_printf));
	data->s = s;
}

void	ft_simple_print(t_printf *data)
{
	/*be carful with index here*/
	int i;
	i = 0;
	while (data->s[i] != '\0' && data->s[i] != '%')
			i++;
	if (i)
	{
		write(1, data->s, i);
		data->all_len += i;
		data->s += i;
	}
}

void	ft_parse_flags(t_printf *data)
{
	if (*(data->s) == '0')
		data->flag |= ZERO;
	if (*(data->s) == ' ')
		data->flag |= SPACE;
		

	if (*(data->s) == 'd' || *(data->s) == 'i')
	{	
		data->all_len += ft_putnbr(va_arg(data->args, int));
		data->s++;
	}
	//parse_spec(data);
}

void    if_persent(t_printf *data)
{
	if (*(++data->s) == '%')
		data->all_len += write(1, "%", 1);
	else
		ft_parse_flags(data);
}

int ft_printf(const char *s, ...)
{ 
	t_printf data;

	ft_init_struct_printf(&data, (char*)s);
	va_start(data.args, s);
	while (*(data.s) != '\0')
	{
		if (*(data.s) != '%')
			ft_simple_print(&data);
		else
			if_persent(&data);
	}
	va_end(data.args);
	return (data.all_len);
}
