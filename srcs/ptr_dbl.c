/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_dbl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:39:47 by psprawka          #+#    #+#             */
/*   Updated: 2017/11/28 16:39:49 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include <stdio.h>
/*
** ----------------------------------- UNSIGNED LONG LONG - p ----------------------------------------
*/

void	print_width_pointer(t_flags *flag_bag, int len, char *number)
{
	int i;
	
	i = -1;
	if (flag_bag->precision < 0)
	{
		while (++i < flag_bag->precision * -1 - len)
			ft_putchar(' ', flag_bag);
		return ;
	}
	if (flag_bag->zero == true && flag_bag->ifprec == false)
		while (++i < flag_bag->width - len)
			ft_putchar('0', flag_bag);
	else
	{
		if (flag_bag->precision - len + 2 > 0)
			while (++i < flag_bag->width - len - (flag_bag->precision - ft_strlen(number)))
				ft_putchar(' ', flag_bag);
		else
			while (++i < flag_bag->width - len)
				ft_putchar(' ', flag_bag);
	}
}

void	print_pointer(t_flags *flag_bag, va_list ap)
{
	unsigned long long	nb;
	char				*print;
	
	nb = va_arg(ap, unsigned long long);
	flag_bag->hash = true;
	print = convert(flag_bag, nb);
	
	if (flag_bag->minus == false && flag_bag->precision > -1)
		print_width_pointer(flag_bag, ft_strlen(print) + 2, print);
	
	print_hash(flag_bag, ft_strlen(print));
	
	while (((flag_bag->precision--) - ft_strlen(print)) > 0)
		ft_putchar('0', flag_bag);
	
	flag_bag->precision++;
	ft_putstr(print, flag_bag);
	
	if (flag_bag->minus == true || flag_bag->precision < 0)
		print_width_pointer(flag_bag, ft_strlen(print) + 2, print);
	
	free(print);
}

/*
** ----------------------------------- FLOAT - f, F, e, E ----------------------------------------
*/

char	*change_float_prec(char *number, t_flags *flag_bag, char *num)
{
	int		i, x;
	
	i = 0;
	x = -1;
	while (number[i] != '\0' && number[i] != '.')
	{
		num[i] = number[i];
		i++;
	}
	
	if (number[i] == '\0')
		return (number);
	
	if (flag_bag->precision != 0)
	{
		while (number[i] != '\0' && flag_bag->precision > x++)
		{
			num[i] = number[i];
			i++;
		}
		while (flag_bag->precision > x++)
			num[i++] = '0';
	}
	
	num[i] = '\0';
	return (num);
}

void	print_width_float(t_flags *flag_bag, int len)
{
	int i;
	
	i = -1;
	if (flag_bag->precision < 0)
	{
		while (++i < flag_bag->precision * -1 - len)
			ft_putchar(' ', flag_bag);
		return ;
	}
	if (flag_bag->zero == true)
		while (++i < flag_bag->width - len)
			ft_putchar('0', flag_bag);
	else
	{
		if (flag_bag->precision - len + 2 > 0)
			while (++i < flag_bag->width - len - (flag_bag->precision - len))
				ft_putchar(' ', flag_bag);
		else
			while (++i < flag_bag->width - len)
				ft_putchar(' ', flag_bag);
	}
}


void	print_float(t_flags *flag_bag, va_list ap)
{
	double	nb;
	char	*print;
	int		prec;
	
	nb = va_arg(ap, double);
	print = ft_ftoa(nb);
	if (flag_bag->precision < 0)
		flag_bag->minus = true;
	if (flag_bag->ifprec == true && flag_bag->ifprec > -1)
		change_float_prec(ft_ftoa(nb), flag_bag, print);
	
	prec = flag_bag->precision;
	if (nb > -1 && flag_bag->space == true)
		ft_putchar(' ', flag_bag);
	
	if (flag_bag->minus == false)
		print_width_float(flag_bag, ft_strlen(print));
	print_plus(flag_bag, (long int *)&nb, 0);
	
	while (((prec--) - ft_strlen(print)) > 0)
		ft_putchar('0', flag_bag);
	
	if ((flag_bag->ifprec == true) || (flag_bag->precision == false))
		ft_putstr(print, flag_bag);
	
	if (flag_bag->minus == true && flag_bag->width > flag_bag->precision)
		print_width_float(flag_bag, ft_strlen(print));
	
	free(print);
}
