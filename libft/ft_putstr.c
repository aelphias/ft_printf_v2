/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 21:44:57 by aelphias          #+#    #+#             */
/*   Updated: 2020/07/09 11:51:37 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char const *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	return(i);
}
