/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 20:39:36 by aelphias          #+#    #+#             */
/*   Updated: 2020/07/20 21:02:36 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_flags(t_printf *data)
{
    while (*(data->s) == '0' || *(data->s) == ' ' || *(data->s) == '-'
    || *(data->s) == '+' | *(data->s) == '#')
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
    }
        parse_width(data);
        data->s++;
    /*check flags------>*/
    if (data->flag)
	{
		if (data->flag & MINUS)
			printf("-  ");
		if (data->flag & PLUS)
			printf("+  ");
		if (data->flag & HASH)
			printf("#  ");
		if (data->flag & ZERO)
			printf("0  ");
		if (data->flag & SPACE)
			printf("space  ");
		printf("\n");
         /*<----------check flags*/
    }

	if (*(data->s) == 'd' || *(data->s) == 'i')
	{	
		print_di(data);
		//data->all_len += ft_putnbr(va_arg(data->args, int));
		data->s++;
	}
	//parse_spec(data);
}

void	parse_width(t_printf *data)
{
	while (*(data->s) > '0' && *(data->s) < '9')
	{
		/* code */
	}
}
