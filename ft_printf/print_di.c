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

void    print_di(t_printf *data)
{
	int num;
	int digits;
    int m_width;

	num = 0;
    m_width = 0;
	digits = 0;   
	/* data->all_len += ft_putnbr(va_arg(data->args, int));*/
	num = va_arg(data->args, int);
	if (num > 0)
	data->positive = 1;
	digits = count_d(num);
	printf("\n{digits:%d}\n", digits);
	if (data->positive && data->flag & PLUS)
	{
		write(1, "+", 1);
		data->all_len++;
	}
	if (digits <= data->width)
    {
        m_width = data->width - digits;
        if (data->flag & MINUS)
        {
            data->all_len += ft_putnbr(num);
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
            data->all_len += ft_putnbr(num);
        }
        
        
    }
    


}
