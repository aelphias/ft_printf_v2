/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 15:49:46 by aelphias          #+#    #+#             */
/*   Updated: 2020/08/01 14:33:18 by aelphias         ###   ########lyon.fr   */
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
/*my lovely struct data--->*/
typedef	struct	s_printf
{
	va_list args;
	char	*s;
	char    flag; /* in binary */
	int		dot;
    int     sign;
	int		spec;
	int		width;
	int		precision;
	int		size; /* in binary */
	int		all_len;
    int     digits;
	int		to_pad;
	long long num_int;
}			t_printf;
/*<---my lovely struct data*/
	int	ft_printf(const char *s, ...);
	void	ft_parse_flags(t_printf *data);
	void	parse_width(t_printf *data);
	void    clean_flags(t_printf *data);
	void	parse_spec(t_printf *data);
	void	parse_dot(t_printf *data);
	void	parse_precision(t_printf *data);
    void    parse_size(t_printf *data);
    void    print(t_printf *data);
	void    print_di(t_printf *data);
	void	count_d(long long num, t_printf *data);
	void	get_int(t_printf *data);

/*TEST--->*/
	void	tst_flags(t_printf *data);


	/* void	ft_parse_flags(t_printf *data, const char *s);
	void	ft_init_struct_printf(t_printf *data, const char *s, va_list args);
	void	ft_count_str(t_printf *data, va_list args);
	void	ft_count_int(t_printf *data, va_list args);
	void	ft_count(t_printf *data, va_list args);
	void	ft_count_char(t_printf *data); */

#endif
