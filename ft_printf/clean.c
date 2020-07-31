/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 18:25:23 by aelphias          #+#    #+#             */
/*   Updated: 2020/07/31 20:16:50 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    clean_flags(t_printf *data)
{
	ft_bzero(&(data->flag), sizeof(data->flag));
	data->digits = 0;
	data->dot = 0;
	data->num_int = 0;
	data->sign = 0;
	data->precision = 0;
	data->size = 0;
	data->spec = 0;
	data->width = 0;
}