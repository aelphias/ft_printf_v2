/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 17:12:34 by aelphias          #+#    #+#             */
/*   Updated: 2020/06/27 21:59:44 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *s, ...)
{
	char *param;
	int i;
	t_printf *list;
	i = 0;
	param = NULL;
	if ((param = ft_strchr(s,'%')))
	{
		if (ft_strstr(s,"d"))
		{
			va_start(list->vl,s);
			i = va_arg(list->vl,int);
			ft_putnbr(i);
		}
	}
	else
		write(1,"ko\n",3);

	return (0);
}
