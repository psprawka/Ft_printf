/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:52:52 by psprawka          #+#    #+#             */
/*   Updated: 2017/11/28 17:52:55 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	print_format(char x)
{
	write(1, &x, 1);
}

void	print(int start, int end, char *format)
{
	while (start < end && format[start] != '\0')
		print_format(format[start++]);
}

void	print_plus(t_flags *flag_bag, long int *nb, int *len)
{
	if (flag_bag->plus == true && *nb != (-9223372036854775807 - 1))
	{
		if (flag_bag->width != 0)
			flag_bag->width--;
		if (*nb > -1)
			ft_putchar('+', flag_bag);
		else
		{
			ft_putchar('-', flag_bag);
			*nb *= -1;
			*len -= 1;
		}

	}
	flag_bag->plus = false;
}

void	print_hash(t_flags *flag_bag, int len)
{
//	static int	if_print;


	if (flag_bag->type == 'x' || flag_bag->type == 'X' || flag_bag->type == 'p')
	{
		if (flag_bag->hash == true)
			(flag_bag->type == 'x' || flag_bag->type == 'p')
				? ft_putstr("0x", flag_bag) : ft_putstr("0X", flag_bag);
	}
	if (flag_bag->type == 'o' || flag_bag->type == 'O')
	{
		if (flag_bag->hash == true && flag_bag->precision - len < 0)// && if_print == false)
			ft_putstr("0", flag_bag);
	}
//	flag_bag->hash = false;
}
