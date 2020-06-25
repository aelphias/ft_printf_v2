/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 02:48:48 by aelphias          #+#    #+#             */
/*   Updated: 2020/02/18 03:17:14 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    int i;
    const void *content;
    t_list *data;

    i = 42;
    data = ft_lstnew((const void *)i, sizeof(int));
    printf("%d", data->content);
    return (0);
}