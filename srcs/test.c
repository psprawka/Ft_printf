/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:11:37 by psprawka          #+#    #+#             */
/*   Updated: 2017/11/09 15:11:40 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("To jest %d test %5d\n", -588, 5);
	printf("\"Books %% OR %% apparels\"\n");
	printf ("%*d\n", 3, 2005);
	printf ("%*d\n", 20, 5);
	printf ("precyzja d, i o, u, x, X - 1, 200: %.1d\nprecyzja f, e, E - 1, 5.777: %.1f\nprecyzja g, G - 7, 25.625 && 2, 25.625: %.7g && %.2g\n", 200, 5.777, 25.625, 25.625);
	//	ft_printf("To jest test %d\n", 5);
	return (0);
}

