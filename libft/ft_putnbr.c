/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 23:14:24 by aelphias          #+#    #+#             */
/*   Updated: 2020/07/29 20:03:37 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	int count;

	count = 0;
	if (n == -2147483648)
		return (write(1,"-2147483648", 12));
	else
	{
		if (n < 0)
		{
			count += write(1, "-",1);
			n = -n;
		}
		if (n / 10 > 0)
		{
			count +=ft_putnbr(n / 10);
		}
		count += ft_putchar(n % 10 + '0');
	}
	return (count);
}
