/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 15:49:46 by aelphias          #+#    #+#             */
/*   Updated: 2020/07/20 21:04:01 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_PRINTF_H
# define _FT_PRINTF_H

# include "libft.h"
# include <stdarg.h> /*variable argument lists*/
# include <stdio.h> /* DEL */ 
# include <stdlib.h> /* DEL */

# define MINUS 1
# define PLUS 2
# define ZERO 4
# define HASH 8
# define SPACE 16

# define SIZE_LL 1
# define SIZE_HH 2
# define SIZE_BIG_L 4
# define SIZE_L 8
# define SIZE_H 16

# define CHAR 'c'
# define STRING 's'
# define INTEGER 'd'
# define UNSIGNED 'u'
# define OCTAL 'o'
# define HEX 'x'
# define HEX_UP 'X'
# define PERCENT '%'
/*my lovely struct data--->*/
typedef	struct	s_printf
{
	/* int     plus;
	int     minus;
	int     zero;
	int     hash;
	int     space; */
	char    flag; // in binary
	char	point;
	int		spec;
	int		width;
	int		precision;
	int		size;
	char	*s;
	int		all_len;
	va_list args;
}			t_printf;
/*<---my lovely struct data*/
	int	ft_printf(const char *s, ...);
	void	ft_parse_flags(t_printf *data);
	void	parse_width(t_printf *data);
	void    clean_flags(t_printf *data);
	void    print_di(t_printf *data);


	//void	ft_parse_flags(t_printf *data, const char *s);
	//void	ft_init_struct_printf(t_printf *data, const char *s, va_list args);
	//void	ft_count_str(t_printf *data, va_list args);
	//void	ft_count_int(t_printf *data, va_list args);
	//void	ft_count(t_printf *data, va_list args);
	//void	ft_count_char(t_printf *data);

#endif
