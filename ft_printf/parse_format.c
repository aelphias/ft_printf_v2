/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 20:39:36 by aelphias          #+#    #+#             */
/*   Updated: 2020/07/31 20:03:49 by aelphias         ###   ########lyon.fr   */
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
	while (data->s && *data->s >= '0' && *data->s <= '9')
	{
		data->width = data->width * 10 + (*data->s - 48);
		data->s++;
	}
	parse_dot(data);
}

void	parse_dot(t_printf *data)
{
	if (*data->s == '.')
	{
		data->dot = 1;
		data->s++;
		parse_precision(data);
	}
	else
		parse_size(data);
}

void	parse_precision(t_printf *data)
{
	while (*(data->s) && *(data->s) >= '0' && *(data->s) <= '9')
	{
		data->precision = data->precision * 10 + (*(data->s) - 48);
		data->s++;
	}
	parse_size(data);
}

void    parse_size(t_printf *data)
{
	if (*data->s == 'l' )
	{
		if (++(*data->s) == 'l' )
			data->size = SIZE_LL;
		else
			data->size = SIZE_L;
	}
	else if (*data->s == 'h' )
	{
		if (++(*data->s) == 'h' )
			data->size = SIZE_HH;
		else
			data->size = SIZE_H;
	}
	else if (*data->s == 'L' )
	{
		if (++(*data->s) == 'L' )
			data->size = SIZE_BIG_L;
	}
	parse_spec(data);
}
