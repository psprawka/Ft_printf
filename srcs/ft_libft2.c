/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 20:33:55 by psprawka          #+#    #+#             */
/*   Updated: 2017/12/13 20:33:57 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	*ft_memset(void *buffer, int c, size_t num)
{
	char	*tab;

	tab = (char *)buffer;
	while (num--)
		*tab++ = c;
	return (buffer);
}

void	*ft_memalloc(size_t size)
{
	void	*tab;

	if (!(tab = (void *)malloc(size)))
		return (NULL);
	ft_memset(tab, '\0', size);
	return (tab);
}

void	ft_putnbr(long int nb, t_flags *bag)
{
	if (nb == LL_MIN)
	{
		ft_putstr("-9223372036854775808", bag);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', bag);
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48, bag);
		return ;
	}
	ft_putnbr(nb / 10, bag);
	ft_putchar(nb % 10 + 48, bag);
	return ;
}
