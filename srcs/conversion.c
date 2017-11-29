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

char	hex_table(int x, char type)
{
	static char x_tab[17] = HEX_SMALL;
	static char X_tab[17] = HEX_LARGE;
	
	if (type == 'x' || type == 'p')
		return (x_tab[x]);
	if (type == 'X')
		return (X_tab[x]);
	
	return (0);
}

char	*convert_hex(unsigned int nb, char type)
{
	char *print;
	int i;
	
	i = 0;
	
	print = ft_memalloc(20);
	if (nb == 0)
		print[i] = '0';
	
	while (nb != 0)
	{
		print[i++] = hex_table((nb % 16), type);
		nb /= 16;
	}
	return (ft_strrev(print));
}

char	*convert_binary(unsigned int nb)
{
	char *print;
	int i;
	
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

char	*convert_octal(unsigned int nb)
{
	char *print;
	int i;
	
	i = 0;
	print = ft_memalloc(20);
	
	if (nb == 0)
		print[i] = '0';
	
	while (nb != 0)
	{
		print[i++] = (nb % 8) + 48;
		nb /= 8;
	}
	return (ft_strrev(print));
}

char	*convert(t_flags *flag_bag, long long nb)
{
	if (flag_bag->type == 'b')
		return (convert_binary(nb));
	
	if (flag_bag->type == 'o' || flag_bag->type == 'O')
		return (convert_octal(nb));
	
	if (flag_bag->type == 'x' || flag_bag->type == 'X' || flag_bag->type == 'p')
		return (convert_hex(nb, flag_bag->type));
	
	if (flag_bag->type == 'u' || flag_bag->type == 'U')
		return (ft_itoa(nb));
	
	
	return (NULL);
}
