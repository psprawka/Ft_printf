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

void	parse_ptr(t_flags *flag_bag)
{
	flag_bag->hash = true;
	flag_bag->minus = flag_bag->precision < 0 ? true : flag_bag->minus;
	flag_bag->precision -= flag_bag->len;
	flag_bag->width -= (flag_bag->precision > 0) ? (2 + flag_bag->len + flag_bag->precision) : flag_bag->len + 2;
	flag_bag->zero = (flag_bag->ifprec == true) ? false : flag_bag->zero;
	flag_bag->width = flag_bag->precision * -1 > flag_bag->width ?
		flag_bag->precision * -1 - (flag_bag->len + 4): flag_bag->width;
}

void	print_pointer(t_flags *flag_bag, va_list ap)
{
	unsigned long long int	nb;
	char					*print;
	
	nb = va_arg(ap, unsigned long long int);
	print = convert(flag_bag, nb);
	flag_bag->len = ft_strlen(print);
	parse_ptr(flag_bag);
	if (flag_bag->zero == true)
		print_hash(flag_bag, nb);
	if (flag_bag->minus == false)
		while (flag_bag->width-- > 0)
			flag_bag->zero == true ? ft_putchar('0', flag_bag) : ft_putchar(' ', flag_bag);
	print_hash(flag_bag, nb);
	while (flag_bag->precision-- > 0)
		ft_putchar('0', flag_bag);
	ft_putstr(print, flag_bag);
	while(flag_bag->width-- > 0)
		ft_putchar(' ', flag_bag);
	free(print);
}

/*
** -------------------------------------- FLOAT - f, F, -------------------------------------------
*/

char	*round(char *print)
{
	int	i;
	int nb;
	i = 0;
	
	nb = ft_atoi(print);
	
	while (print[i++] != '.')
		;
	print[i] > '4' ? nb++ : nb;
	free(print);
	print = ft_itoa(nb);
	
	return (print);
}


char	*parse_flt(t_flags *flag_bag, char *print)
{
	print = (flag_bag->precision < 1 && flag_bag->ifprec == true) ? round(print) : print;
	flag_bag->width = flag_bag->precision < 0 ? flag_bag->precision * -1 : flag_bag->width;
	flag_bag->ifprec == true && flag_bag->precision != 0 ? flag_bag->precision++ : flag_bag->precision;
	flag_bag->precision = flag_bag->ifprec == false ? 7 : flag_bag->precision;
	flag_bag->len = flag_bag->precision < 0 ? flag_bag->len - 7 : flag_bag->len - 7 + flag_bag->precision;
	flag_bag->minus = flag_bag->precision < 0 ? true : flag_bag->minus;
	flag_bag->width -= flag_bag->len;
	flag_bag->space == true && flag_bag->width < 1 ? flag_bag->width = 1 : flag_bag->width;
	flag_bag->plus == true ? flag_bag->width-- : flag_bag->width;
	return(print);
}


void	print_float(t_flags *flag_bag, va_list ap)
{
	double	nb;
	char	*print;
	int		i;
	
	i = 1;
	nb = va_arg(ap, double);
	print = ft_ftoa(nb);
	flag_bag->len = ft_strlen(print);
	print = parse_flt(flag_bag, print);
	nb < 0 ? flag_bag->width++ : i--;
	if (flag_bag->minus == false)
		while (flag_bag->width-- > 0)
			flag_bag->zero == true ? ft_putchar('0', flag_bag) : ft_putchar(' ', flag_bag);
	print_plus(flag_bag, (long int)&nb);
	while (print[i] != '.' && print[i] != '\0')
		ft_putchar(print[i++], flag_bag);
	while (flag_bag->precision-- > 0)
		ft_putchar(print[i++], flag_bag);
	while(flag_bag->width-- > 0)
		ft_putchar(' ', flag_bag);
//	free(print);
}
