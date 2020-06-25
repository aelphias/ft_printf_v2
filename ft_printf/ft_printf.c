/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 17:12:34 by aelphias          #+#    #+#             */
/*   Updated: 2020/06/22 21:39:54 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *s, ...)
{
    //%   d
    char *param;
    va_list vl;
    int i;
    
    i = 0;
    param = NULL;
    if ((param = ft_strchr(s,'%')))
    {
        if (ft_strstr(s,"d"))
        {
            va_start(vl,s);
            i = va_arg(vl,int);
            ft_putnbr(i);
        }
    }
    else
        write(1,"ko\n",3);

    return (0);
}
