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


int count_d(int num)
{
	int digits;

	digits = 0;
	while (num > 0)
	{
		num = num / 10;
		digits++;
	}
	return (digits);
}

void    print_di_pres(t_printf *data)
{

}

void    print_di(t_printf *data)
{
    int m_width;

    m_width = 0;   
	/* data->all_len += ft_putnbr(va_arg(data->args, int));*/
	data->num_int = va_arg(data->args, int);
	if (data->num_int > 0)
	data->positive = 1;
	data->digits = count_d(data->num_int);
	printf("\n{digits:%d}\n", data->digits);
	if (data->positive && data->flag & PLUS)
	{
		write(1, "+", 1);
		data->all_len++;
	}
	if (data->digits <= data->width)
    {
        m_width = data->width - data->digits;
        if (data->flag & MINUS)
        {
            data->all_len += ft_putnbr(data->num_int);
            data->all_len += m_width;
            while (m_width)
            {
                write(1, " ", 1);
                m_width--;
            }
        }
        else if (data->flag & ZERO)
        {
            data->all_len += m_width;
            while (m_width)
            {
                write(1, "0", 1);
                m_width--;
            }
            data->all_len += ft_putnbr(data->num_int);
        }
    }
    else
    {
        data->all_len += ft_putnbr(va_arg(data->args, int));
    }
    
}


