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

	num = 0;
	digits = 0;   
	/* data->all_len += ft_putnbr(va_arg(data->args, int));
 */
	num = va_arg(data->args, int);
	digits = count_d(num);
	if (digits >= data->width)
		data->all_len += ft_putnbr(num);
	


}
