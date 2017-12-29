/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 22:18:18 by psprawka          #+#    #+#             */
/*   Updated: 2017/11/27 22:18:20 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

char	*convert_ws(wchar_t *str, int len)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(len + 1);
	while (i < len)
	{
		new[i] = (char)str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*convert_hex(unsigned long int nb, char type)
{
	char		*print;
	int			i;

	i = 0;
	print = ft_memalloc(21);
	if (nb == 0)
		print[i] = '0';
	if (type == 'x' || type == 'p')
		while (nb != 0)
		{
			print[i++] = "0123456789abcdef"[nb % 16];
			nb /= 16;
		}
	else
		while (nb != 0)
		{
			print[i++] = "0123456789ABCDEF"[nb % 16];
			nb /= 16;
		}
	return (ft_strrev(print));
}

char	*convert_binary(unsigned long int nb)
{
	char	*print;
	int		i;

	i = 0;
	print = ft_memalloc(33);
	if (nb == 0)
		print[i] = '0';
	while (nb != 0)
	{
		print[i++] = (nb % 2) + 48;
		nb /= 2;
	}
	return (ft_strrev(print));
}

char	*convert_octal(unsigned long int nb)
{
	char	*print;
	int		i;

	i = 0;
	print = ft_memalloc(22);
	if (nb == 0)
		print[i++] = '0';
	while (nb != 0)
	{
		print[i++] = (nb % 8) + 48;
		nb /= 8;
	}
	print[i] = '\0';
	return (ft_strrev(print));
}

char	*convert_uni(wchar_t wide)
{
	char *new;

	new = ft_strnew(5);
	if (wide < 0x80)
		new[0] = ((wide >> 0) & 0x7F) | 0x00;
	else if (wide < 0x800)
	{
		new[0] = ((wide >> 6) & 0x1F) | 0xC0;
		new[1] = ((wide >> 0) & 0x3F) | 0x80;
	}
	else if (wide < 0x10000)
	{
		new[0] = ((wide >> 12) & 0x0F) | 0xE0;
		new[1] = ((wide >> 6) & 0x3F) | 0x80;
		new[2] = ((wide >> 0) & 0x3F) | 0x80;
	}
	else if (wide < 0x10FFFF)
	{
		new[0] = ((wide >> 18) & 0x07) | 0xF0;
		new[1] = ((wide >> 12) & 0x3F) | 0x80;
		new[2] = ((wide >> 6) & 0x3F) | 0x80;
		new[3] = ((wide >> 0) & 0x3F) | 0x80;
	}
	return (new);
}
