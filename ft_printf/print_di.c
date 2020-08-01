/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_di.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 18:43:40 by aelphias          #+#    #+#             */
/*   Updated: 2020/07/20 18:49:25 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	count_d(long long num, t_printf *data)
{
	while (num > 0)
	{
		num /= 10;
		data->digits++;
	}
}

void	get_int(t_printf *data)
{
	if (data->size & SIZE_LL)
		data->num_int = va_arg(data->args, long long);
	else if (data->size & SIZE_HH)
		data->num_int = (char)va_arg(data->args, int);
	else if (data->size & SIZE_L)
		data->num_int = va_arg(data->args, long);
	else if (data->size & SIZE_H)
		data->num_int = (short)va_arg(data->args, int);
	else
		data->num_int = va_arg(data->args, int);
	if (data->num_int < 0 )
	{
		data->sign = 1;
		data->num_int *=  -1;
		count_d(data->num_int, data);
	}
	else
		count_d(data->num_int, data);
}

void    print_di(t_printf *data)
{
	get_int(data);
	if (data->flag & PLUS)
	{
		write(1, "+", 1);
		data->all_len++;
	}
	if (data->digits <= data->width)
	{
	   data->to_pad = data->width - data->digits;
		if (data->flag & MINUS)
		{
			data->all_len += ft_putnbr(data->num_int);
			data->all_len += data->to_pad;
			while (data->to_pad)
			{
				write(1, " ", 1);
				data->to_pad--;
			}
		}
		else if ((data->flag & ZERO) && (data->precision < 1))
		{
			data->all_len += data->to_pad;
			while (data->to_pad)
			{
				write(1, "0", 1);
				data->to_pad--;
			}
			data->all_len += ft_putnbr(data->num_int);
		}
	}
	else
		data->all_len += ft_putnbr(data->num_int);
}
