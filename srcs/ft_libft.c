/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 11:44:55 by psprawka          #+#    #+#             */
/*   Updated: 2017/11/27 11:44:58 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_putchar(char c, t_flags *flag_bag)
{
	write(1, &c, 1);
	flag_bag->ret += 1;
}


void	ft_putstr(char const *s, t_flags *flag_bag)
{
	int	i;
	
	i = 0;
	while (s[i])
		ft_putchar(s[i++], flag_bag);
}


int		ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


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
	ft_memset(tab, 0, size);
	return (tab);
}


char	*ft_strrev(char *str)
{
	char *rev;
	int i;
	int x;
	
	x = 0;
	i = 0;
	rev = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i] != '\0')
		i++;
	i--;
	while (i > -1)
		rev[x++] = str[i--];
	
	rev[x] = '\0';
	return (rev);
}


void	ft_putnbr(int nb, t_flags *flag_bag)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648", flag_bag);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', flag_bag);
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48, flag_bag);
		return ;
	}
	ft_putnbr(nb / 10, flag_bag);
	ft_putchar(nb % 10 + 48, flag_bag);
	return ;
}
