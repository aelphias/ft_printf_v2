/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 17:12:34 by aelphias          #+#    #+#             */
/*   Updated: 2020/07/01 19:48:51 by aelphias         ###   ########lyon.fr   */
/*              	                                                          */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_struct_printf(t_printf *myprintf, char *s)
{	
	ft_bzero(myprintf, sizeof(t_printf));
	myprintf->s = s;
}

int ft_printf(const char *s, ...)
{
	printf("{ 1 }\n");
	char *param;
	int i;
	t_printf *myprintf;

	i = 0;
	param = NULL;
	ft_init_struct_printf(myprintf, (char*)s);
	if ((param = ft_strchr(myprintf->s,'%')))
	{
		printf("{ 2 }\n");

		if (ft_strstr(myprintf->s,"d"))
		{
			printf("{ 3 }\n");

			va_start(myprintf->handle_spec,s);
			myprintf->s = (char*)s;
			i = va_arg(myprintf->handle_spec, int);
			printf("\n  %d\n  ",i);

			ft_putnbr(i);
			printf("{ 4 }\n");
			va_end(myprintf->handle_spec);
		}
	}
	else
	{
		// while (s)
		// {
		// 	/* code */
		// }
		write(1,"ko\n",3);
	}

	return (0);
}
