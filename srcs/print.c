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

void	print(int start, int end, char *format)
{
	while (start < end && *format != '\0')
		ft_putchar(format[start++]);
}

void	print_plus(t_flags *flag_bag, int nb)
{
	if (flag_bag->plus == true)
	{
		if (nb > -1)
			ft_putchar('+');
		else
		{
			ft_putchar('-');
			nb *= -1;
		}
	}
}

void	print_hash(t_flags *flag_bag, int len)
{
	if (flag_bag->type == 'x' || flag_bag->type == 'X' || flag_bag->type == 'p')
	{
		if (flag_bag->hash == true)
			(flag_bag->type == 'x' || flag_bag->type == 'p') ? ft_putstr("0x") : ft_putstr("0X");
		flag_bag->hash = false;
	}
	if (flag_bag->type == 'o' || flag_bag->type == 'O')
	{
		if (flag_bag->hash == true && flag_bag->precision - len < 0)
			ft_putstr("0");
	}
}
