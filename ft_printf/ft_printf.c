/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 17:12:34 by aelphias          #+#    #+#             */
/*   Updated: 2020/07/01 19:48:51 by aelphias         ###   ########lyon.fr   */
/*              	                                                              */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *s, ...)
{
	char *param;
	int i;
	va_list args;
	//t_printf *list;
	i = 0;
	param = NULL;
	if ((param = ft_strchr(s,'%')))
	{
		if (ft_strstr(s,"d"))
		{
			va_start(args,s);
			i = va_arg(args,int);
			
			//va_start(list->vl,s);
			//i = va_arg(list->vl,int);
			ft_putnbr(i);
		}
	}
	else
		write(1,"ko\n",3);

	return (0);
}
