/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 20:39:36 by aelphias          #+#    #+#             */
/*   Updated: 2020/07/26 19:38:28 by aelphias         ###   ########lyon.fr   */
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
		print_di(data);
		data->s++;
		tst_flags(data);
	}
}
