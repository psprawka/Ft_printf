/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libftprintf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 18:28:15 by psprawka          #+#    #+#             */
/*   Updated: 2017/12/28 18:28:18 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

/*
** ------------------------- LIBFTPRINTF FUNCTIONS -----------------------------
*/

void	ft_putchar(char c, t_flags *bag)
{
	write(1, &c, 1);
	bag->ret += 1;
}

void	ft_putstr(char const *s, t_flags *bag)
{
	int	i;

	i = 0;
	while (s[i])
		ft_putchar(s[i++], bag);
}

int		ft_wstrlen(wchar_t *ws)
{
	int	len;

	len = 0;
	while (ws[len])
	{
		if (ws[len] > 0xFF)
			return (-1);
		len++;
	}
	return (len);
}

int		if_unicode(t_flags *bag, wchar_t *ws)
{
	if (ARGUMENT != 7)
	{
		if (ws == NULL)
			ft_putstr("(null)", bag);
		else
			while (*ws != '\0')
				write(1, ws++, 1);
		return (-1);
	}
	return (0);
}
