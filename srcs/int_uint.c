/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 14:19:42 by psprawka          #+#    #+#             */
/*   Updated: 2017/11/27 14:19:44 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

/*
** print_width_int prints both precision and width
*/

//void	read_arguments(t_flags *flag_bag)
//{
//	;
//}


#include <stdio.h>
/*
** ------------------------------------ INT - i, d, D --------------------------------------
*/



void	print_width_int(t_flags *flag_bag, int len, long int *nb)
{
	int i;
	int strlen;
//	printf("len: %d\n", len);

	i = -1;
	strlen = (nb == 0 ? 0 : ft_strlen(ft_itoa(*nb)));
	(flag_bag->plus == true && *nb > -1) ? len++ : len;
	if (flag_bag->precision < 0)
		flag_bag->width = flag_bag->precision * -1 + len;
	if (flag_bag->zero == true && flag_bag->ifprec == false)
	{
		print_plus(flag_bag, nb, &len);
		if (*nb < 0 && *nb != (-9223372036854775807 - 1))
		{
			ft_putchar('-', flag_bag);
			if (flag_bag->precision > 0)
				flag_bag->precision--;
			*nb *= -1;
		}
		
		if (flag_bag->precision - strlen > 0)
			while (++i < flag_bag->width - len - (flag_bag->precision - strlen))
				ft_putchar('0', flag_bag);
		else
		{
			while (++i < flag_bag->width - len)
				ft_putchar('0', flag_bag);
		}
	}
	else
	{
//		print_plus(flag_bag, nb, &len);
		if (flag_bag->precision - strlen > 0)
			while (++i < flag_bag->width - len - (flag_bag->precision
						- strlen))
				ft_putchar(' ', flag_bag);
		else
			while (++i < flag_bag->width - len)
				ft_putchar(' ', flag_bag);
	}
//	printf("[%lD]\n", nb);
}

void	print_int(t_flags *flag_bag, va_list ap)
{
	long int nb;
	int prec;
	int len;
	
	if (flag_bag->type == 'd')
		nb = va_arg(ap, int);
	else
		nb = va_arg(ap, long int);
	len = ft_strlen(ft_itoa(nb));
//	printf("prec: %d, width: %d\n", flag_bag->precision, flag_bag->width);
	if (nb > -1 && flag_bag->space == true)
	{
		ft_putchar(' ', flag_bag);
		flag_bag->width--;
	}
//	printf("[%llD]\n", nb);
	if (flag_bag->minus == false)
		print_width_int(flag_bag, len, &nb);
//	if (nb < 0)
//	{
//		ft_putchar('-', flag_bag);
//		nb *= -1;
////		flag_bag->width--;
//	}
	print_plus(flag_bag, &nb, &len);
	prec = flag_bag->precision;

	while ((prec--) - len > 0)
		ft_putchar('0', flag_bag);
//	printf("HERE\n");
//	printf("[%lD]\n", nb);
	if (((flag_bag->ifprec == true && flag_bag->precision > -1 && nb != 0) || flag_bag->ifprec == false))
//		|| (flag_bag->ifprec == true && flag_bag->precision == 0) && nb != 0)
		ft_putnbr(nb, flag_bag);
//	printf("HERE\n");
	if (flag_bag->minus == true && flag_bag->width > flag_bag->precision)
		print_width_int(flag_bag, len, &nb);
}


/*
** -------------------------------- UNSIGNED INT - o, O, u, U, x, X -----------------------------------
*/

void	print_width_unsigned_int(t_flags *flag_bag, int len, char *number)
{
	long int i;

	i = -1;
	((flag_bag->type == 'x' || flag_bag->type == 'X') && flag_bag->hash == true) ? len += 2 : len;
	((flag_bag->type == 'o' || flag_bag->type == 'O') && flag_bag->hash == true) ? len += 1 : len;
	(flag_bag->ifprec == true && flag_bag->precision < 1) ? len = 0 : len;
	
	if (flag_bag->precision < 0)
	{
		while (++i < flag_bag->precision * -1 - len)
			ft_putchar(' ', flag_bag);
		return ;
	}
	if (flag_bag->zero == true && flag_bag->ifprec == false)
	{
		if (number[0] != '0')
			print_hash(flag_bag, ft_strlen(number));
		while (++i < flag_bag->width - len)
			ft_putchar('0', flag_bag);
	}
	else
	{
		if (flag_bag->precision - len > 0)
		{
			while (++i < flag_bag->width - len - (flag_bag->precision - ft_strlen(number)))
				ft_putchar(' ', flag_bag);
		}
		else
//			if (flag_bag->precision - len == 0)
//				;
//		else
			while (++i < flag_bag->width - len)
					ft_putchar(' ', flag_bag);
//				printf("i = %d, width = %d, len : %d\n", i, flag_bag->width, len);
//			}
	}
}
#include <stdio.h>

void	print_unsigned_int(t_flags *flag_bag, va_list ap)
{
	unsigned long int nb;
	char *print;
	int prec;

	prec = flag_bag->precision;
	nb = ((flag_bag->type == 'U' || flag_bag->type == 'O') ? va_arg(ap, unsigned long int) :
		  va_arg(ap, unsigned int));
	print = convert(flag_bag, nb);
//	printf("[%s]\n", print);
	if (flag_bag->minus == false && flag_bag->precision > -1)
		print_width_unsigned_int(flag_bag, ft_strlen(print), print);

	if (print[0] != '0')
		print_hash(flag_bag, ft_strlen(print));
	
	while (((prec--) - ft_strlen(print)) > 0)
		ft_putchar('0', flag_bag);
//	printf("prec: %d, width: %d\n", flag_bag->precision, flag_bag->width);
	if (((flag_bag->ifprec == true && flag_bag->precision > 0) || (flag_bag->ifprec == false))
		|| ((flag_bag->type == 'o' || flag_bag->type == 'O') && flag_bag->hash == true
			&& flag_bag->ifprec == true && flag_bag->precision == 0))
			ft_putstr(print, flag_bag);

	if (flag_bag->minus == true || flag_bag->precision < 0)
		print_width_unsigned_int(flag_bag, ft_strlen(print), print);

	free(print);
}
