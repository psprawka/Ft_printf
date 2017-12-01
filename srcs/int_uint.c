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



void	print_width_int(t_flags *flag_bag, int len, int *nb)
{
	int i;

	i = -1;
	(flag_bag->plus == true && *nb > -1) ? len++ : len;
	if (flag_bag->precision < 0)
		flag_bag->width = flag_bag->precision * -1 + len;
	if (flag_bag->zero == true && flag_bag->ifprec == false)
	{
//		printf("CHUJ\n");
		print_plus(flag_bag, nb);
		if (*nb < 0)
		{
			ft_putchar('-', flag_bag);
			if (flag_bag->precision > 0)
				flag_bag->precision--;
			*nb *= -1;
		}
		if (flag_bag->precision - ft_strlen(ft_itoa(*nb)) > 0)
			while (++i < flag_bag->width - len - (flag_bag->precision - ft_strlen(ft_itoa(*nb))))
				ft_putchar('0', flag_bag);
		else
			while (++i < flag_bag->width - len )
				ft_putchar('0', flag_bag);
	}
	else
	{
		if (flag_bag->precision - ft_strlen(ft_itoa(*nb)) > 0)
			while (++i < flag_bag->width - len - (flag_bag->precision
						- ft_strlen(ft_itoa(*nb))))
				ft_putchar(' ', flag_bag);
		else
			while (++i < flag_bag->width - len)
				ft_putchar(' ', flag_bag);
	}
}

void	print_int(t_flags *flag_bag, va_list ap)
{
	int nb;
	int prec;

	nb = va_arg(ap, int);
	
	if (nb > -1 && flag_bag->space == true)
		ft_putchar(' ', flag_bag);
	
	if (flag_bag->minus == false)
		print_width_int(flag_bag, ft_strlen(ft_itoa(nb)), &nb);
	
	print_plus(flag_bag, &nb);
	prec = flag_bag->precision;
	
	while (((prec--) - ft_strlen(ft_itoa(nb))) > 0)
	{
		if (nb < 0)
		{
			ft_putchar('-', flag_bag);
			prec--;
			nb *= -1;
		}
		ft_putchar('0', flag_bag);
	}
	
	if ((flag_bag->ifprec == true && flag_bag->precision > 0) || flag_bag->ifprec == false)
		ft_putnbr(nb, flag_bag);
	
	if (flag_bag->minus == true && flag_bag->width > flag_bag->precision)
		print_width_int(flag_bag, ft_strlen(ft_itoa(nb)), &nb);
}


/*
** -------------------------------- UNSIGNED INT - o, O, u, U, x, X -----------------------------------
*/

void	print_width_unsigned_int(t_flags *flag_bag, int len, char *number)
{
	int i;

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

void	print_unsigned_int(t_flags *flag_bag, va_list ap)
{
	unsigned int nb;
	char *print;
	int prec;
	
	prec = flag_bag->precision;
	nb = va_arg(ap, unsigned int);
	print = convert(flag_bag, nb);
	
	if (flag_bag->minus == false && flag_bag->precision > -1)
		print_width_unsigned_int(flag_bag, ft_strlen(print), print);
	
	if (print[0] != '0')
		print_hash(flag_bag, ft_strlen(print));
	
	while (((flag_bag->precision--) - ft_strlen(print)) > 0)
		ft_putchar('0', flag_bag);
	flag_bag->precision++;
	
	if ((flag_bag->ifprec == true && flag_bag->precision > 0) || flag_bag->ifprec == false)
			ft_putstr(print, flag_bag);
	if ((flag_bag->ifprec == true && flag_bag->precision == 0 && (flag_bag->type == 'o' || flag_bag->type == 'O')))
		ft_putstr(print, flag_bag);
	
	if (flag_bag->minus == true || flag_bag->precision < 0)
		print_width_unsigned_int(flag_bag, ft_strlen(print), print);
	
	free(print);
}
