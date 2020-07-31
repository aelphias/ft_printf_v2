#include "ft_printf.h"

void tst_flags(t_printf *data)
{
	write(1,"\nDebug:\n", 8);
    /*check flags------>*/
    if (data->flag)
	{
		if (data->flag & MINUS)
			printf("{data->flag - }");
		if (data->flag & PLUS)
			printf("{data->flag + }");
		if (data->flag & HASH)
			printf("{data->flag # }");
		if (data->flag & ZERO)
			printf("{data->flag 0 }");
		if (data->flag & SPACE)
			printf("{data->flag space }");
		printf("\n");
         /*<----------check flags*/
	}
	if (data->width)
		printf("{data->width:%d}\n", data->width);
	if (data->dot)
		printf("dot: yes}\n");
	if (data->precision)
		printf("{data->presion:%d}\n", data->precision);
	printf("\n{digits:%d}\n", data->digits);

}