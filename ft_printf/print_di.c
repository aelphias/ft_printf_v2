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

void    print_di(t_printf *data)
{
    if (data->width )//  && !(data->flag & MINUS) && (data->flag & ZERO))
    {
        write(1, " ", data->width);
        data->all_len += ft_putnbr(va_arg(data->args, int));
    }
    else
        data->all_len += ft_putnbr(va_arg(data->args, int));
}
