/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_spec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 18:07:35 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/01 14:56:17 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_spec(t_printf *data)
{
	if (*data->s == 'd' || *data->s == 'i')
    {
		data->spec |= INTEGER;
        data->s++;
        print_di(data);   
    }
    else if (*data->s == 'o')
        data->spec |= OCTAL;
    else if (*data->s == 'u')
        data->spec |= UNSIGNED;
    else if (*data->s == 'x')
        data->spec |= HEX;
    else if (*data->s == 'X')
        data->spec |= HEX_UP;
}

/* void    print(t_printf *data)
{
    if (data->spec & INTEGER)
}
 */
