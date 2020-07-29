/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 20:39:36 by aelphias          #+#    #+#             */
/*   Updated: 2020/07/29 18:52:35 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_flags(t_printf *data)
{
	while (*(data->s) == '0' || *(data->s) == ' ' || *(data->s) == '-'
	|| *(data->s) == '+' || *(data->s) == '#')
	{
		if (*(data->s) == '0')
			data->flag |= ZERO;
		if (*(data->s) == ' ')
			data->flag |= SPACE;
		if (*(data->s) == '-')
			data->flag |= MINUS;
		if (*(data->s) == '+')
			data->flag |= PLUS;
		if (*(data->s) == '#')
			data->flag |= HASH;
		data->s++;
	}
	parse_width(data);
}

void	parse_width(t_printf *data)
{
	while (*(data->s) && *(data->s) >= '0' && *(data->s) <= '9')
	{
		data->width = data->width * 10 + (*(data->s) - 48);
		data->s++;
	}
	parse_dot(data);
}

void	parse_dot(t_printf *data)
{
	if (*(data->s) == '.')
	{
		data->dot = 1;
		data->s++;
		parse_presion(data);
	}
	else
		parse_spec(data);
}

void	parse_presion(t_printf *data)
{
	while (*(data->s) && *(data->s) >= '0' && *(data->s) <= '9')
	{
		data->precision = data->precision * 10 + (*(data->s) - 48);
		data->s++;
	}
	parse_spec(data);
}

void	parse_spec(t_printf *data)
{
	if (*(data->s) == 'd' || *(data->s) == 'i')
	{	
		data->spec |= INTEGER;
		print_di(data);
		tst_flags(data);
		data->s++;
	}
}
