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
#include "includes/libftprintf.h"

int main()
{
//	short int fuckyou = 5;
//	int *b = 578;

//	printf("MINE: [%s]\n", convert_hex(429496, 'X'));
//	printf("NORM: [%X]\n", (unsigned int)429496);


//	printf("To jest %d test %+d\n", -588, 5);
//	printf("\"Books %% OR %% apparels\"\n");
//	printf ("%14*.*d\n", 18, 7, 20050);
//	printf ("normal:%d\nh: %hd\nhh: %hhhd\n", 2, x, '2');
//	printf("%d\n", 15);
//	printf("% c\n", 'J');

//	// p:
//	ft_printf("MINE:\nplus:				[%+p]\n", b);
//	ft_printf("width 10:			[%10p]\n", b);
//	ft_printf("minus and width 10:		[%-10p]\n", b);
//	ft_printf("space:				[% p]\n", b);
//	ft_printf("hash:				[%#p]\n", b);
//	ft_printf("precyzja 1:			[%.1p]\n", b);
//	ft_printf("width 10 prec 1:		[%10.1p]\n", b);
//	ft_printf("width 10 prec 6:		[%10.6p]\n", b);
//	ft_printf("hh:				[%hhp]\n", b);
//	ft_printf("h:				[%hp]\n", b);
//	ft_printf("ll:				[%llp]\n", b);
//	ft_printf("l:				[%lp]\n", b);
//	ft_printf("z:				[%zp]\n", b);
//	ft_printf("j:				[%jp]\n\n", b);
//	printf("STANDARD:\nplus:				[%+p]\n", b);
//	printf("width 10:			[%10p]\n", b);
//	printf("minus and width 10:		[%-10p]\n", b);
//	printf("space:				[% p]\n", b);
//	printf("hash:				[%#p]\n", b);
//	printf("precyzja 1:			[%.1p]\n", b);
//	printf("width 10 prec 1:		[%10.1p]\n", b);
//	printf("width 10 prec 6:		[%10.6p]\n", b);
//	printf("hh:				[%hhp]\n", b);
//	printf("h:				[%hp]\n", b);
//	printf("ll:				[%llp]\n", b);
//	printf("l:				[%lp]\n", b);
//	printf("z:				[%zp]\n", b);
//	printf("j:				[%jp]\n\n", b);


//	//string:
//	printf("plus:				[%+s]\n", "Hello");
//	printf("width 10:			[%10s]\n", "Hello");
//	printf("minus and width 10:		[%-10s]\n", "Hello");
//	printf("space:				[% s]\n", "Hello");
//	printf("hash:				[%#s]\n", "Hello");
//	printf("precyzja 1:			[%.1s]\n", "Hello");
//	printf("width 10 prec 1:		[%10.1s]\n", "Hello");
//	printf("width 10 prec 6:		[%10.6s]\n", "Hello");
//	printf("hh:				[%hhs]\n", "Hello");
//	printf("h:				[%hs]\n", "Hello");
//	printf("ll:				[%lls]\n", "Hello");
//	printf("l:				[%ls]\n", "Hello");
//	printf("z:				[%zs]\n", "Hello");
//	printf("j:				[%js]\n\n", "Hello");
//
//  //char:
//	printf("plus:				[%+c]\n", 12);
//	printf("width 10:			[%10c]\n", 'H');
//	printf("minus and width 10:		[%-10c]\n", 'H');
//	printf("space:				[% c]\n", 'H');
//	printf("hash:				[%#c]\n", 'H');
//	printf("precyzja 1:			[%.1c]\n", 'H');
//	printf("width 10 prec 1:		[%10.1c]\n", 'H');
//	printf("width 10 prec 6:		[%10.6c]\n", 'H');
//	printf("hh:				[%hhc]\n", 'H');
//	printf("h:				[%hc]\n", 'H');
//	printf("ll:				[%llc]\n", 'H');
//	printf("l:				[%lc]\n", 'H');
//	printf("z:				[%zc]\n", 'H');
//	printf("j:				[%jc]\n", 'H');

//	// d, i, D:
	// printf("t:plus:				[%+i]\n", 12);
	// ft_printf("m:plus:				[%+i]\n", 12);
	// printf("10.6:				[% 10.6d]\n", 42);
	// ft_printf("10.6:				[% 10.6d]\n", 42);
	// printf("-+10.5:				[%-+10.5d]\n", 4242);
	// ft_printf("-+10.5:				[%-+10.5d]\n", 4242);
	// printf("zero:				[%0i]\n", 12);
	// ft_printf("zero:				[%0i]\n", 12);
	// printf("width 10:			[%10i]\n", 12);
	// ft_printf("width 10:			[%10i]\n", 12);
	// printf("minus and width 10:		[%-10i]\n", 12);
	// ft_printf("minus and width 10:		[%-10i]\n", 12);
	// printf("minus and width 10:		[%-10i]\n", 12);
	// ft_printf("hash:				[%#i]\n", 12);
	// printf("hash:				[%#i]\n", 12);
	// ft_printf("precyzja 1:			[%.1i]\n", 12);
	// printf("precyzja 1:			[%.1i]\n", 12);
	// ft_printf("width 10 prec 1:		[%10.1i]\n", 12);
	// printf("width 10 prec 1:		[%10.1i]\n", 12);
	// ft_printf("width 10 prec 6:		[%10.6i]\n", 12);
	// printf("width 10 prec 6:		[%10.6i]\n", 12);
	// ft_printf("- width 10 prec 6:		[%10.6i]\n", 12);
	// printf("- width 10 prec 6:		[%10.6i]\n", 12);
//
//	printf("t: @moulitest: %.x\n", 0, 0);
//	ft_printf("m: @moulitest: %.x\n", 0, 0);
	
//	ft_printf("o:\nm: -10.5:	[%-10.5o]\n", 25);
//	printf("t: -10.5:	[%-10.5o]\n", 25);
//	ft_printf("-5.10:		[%-5.10o]\n", 25);
//	printf("-5.10:		[%-5.10o]\n", 25);
//	ft_printf("\nd:\n0+5:		[%0+5d]\n", -1);
//	printf("0+5:		[%0+5d]\n", -1);
	ft_printf("04.3:		[%04.3d]\n", -1);
	printf("04.3:		[%04.3d]\n", -1);
//	ft_printf("+10.5:		[%+10.5d]\n", 25);
//	printf("+10.5:		[%+10.5d]\n", 25);
	ft_printf("03.2:		[%03.2d]\n", -1);
	printf("03.2:		[%03.2d]\n", -1);
	ft_printf(".10:		[%.10d]\n", -1);
	printf(".10:		[%.10d]\n", -1);
	ft_printf("5.:		[%5.d]\n", 0);
	printf("5.:		[%5.d]\n", 0);
	ft_printf("5.0:		[%5.0d]\n", 0);
	printf("5.0:		[%5.0d]\n", 0);
	ft_printf("4.:		[%4.d]\n", 0);
	printf("4.:		[%4.d]\n", 0);
//	ft_printf(".0:		[%.0d]\n", -1);
//	printf(".0:		[%.0d]\n", -1);
//	ft_printf("5.:	[%5.x]\n5.0:	[%5.0x]\n", 0, 0);
//	ft_printf("o:\n#.:	[%#.o]\n#.0:	[%#.0o]\n", 0, 0);
//	ft_printf(".:	[%.o]\n.0:	[%.0o]\n", 0, 0);
//	ft_printf("5.:	[%5.o]\n5.0:	[%5.0o]\n", 0, 0);
	// ft_printf("hh:				[%hhi]\n", 12);
	// printf("hh:				[%hhi]\n", 12);
	// ft_printf("h:				[%hi]\n", 12);
	// printf("h:				[%hi]\n", 12);
	// ft_printf("ll:				[%lli]\n", 12);
	// printf("ll:				[%lli]\n", 12);
	// ft_printf("l:				[%li]\n", 12);
	// printf("l:				[%li]\n", 12);
	// ft_printf("z:				[%zi]\n", 12);
	// printf("z:				[%zi]\n", 12);
	// ft_printf("j:				[%ji]\n\n", 12);
	// printf("j:				[%ji]\n\n", 12);
//
//  // f, F:
//	printf("normal:				[%F]\n", 12.12);
//	printf("plus:				[%+f]\n", 12.12);
//	printf("zero:				[%0f]\n", 12.12);
//	printf("width 10:			[%10f]\n", 12.12);
//	printf("minus and width 10:		[%-10f]\n", 12.12);
//	printf("space:				[% f]\n", 12.12);
//	printf("hash:				[%#f]\n", 12.12);
//	printf("precyzja 1:			[%.1f]\n", 12.12);
//	printf("width 10 prec 1:		[%10.1f]\n", 12.12);
//	printf("width 10 prec 6:		[%10.6f]\n", 12.12);
//	printf("hh:				[%hhf]\n", 12.12);
//	printf("h:				[%hf]\n", 12.12);
//	printf("ll:				[%llf]\n", 12.12);
//	printf("l:				[%lf]\n", 12.12);
//	printf("z:				[%zf]\n", 12.12);
//	printf("j:				[%jf]\n", 12.12);

//	// X, x:
//	printf("normal:				[%x]\n", 1244);
//	printf("plus:				[%+x]\n", 1244);
//	printf("zero:				[%0x]\n", 1244);
//	printf("width 10:			[%10x]\n", 1244);
//	printf("minus and width 10:		[%-10x]\n", 1244);
//	printf("space:				[% x]\n", 1244);
//	printf("hash:				[%#x]\n", 1244);
//	printf("precyzja 1:			[%.1x]\n", 1244);
//	printf("width 10 prec -1:		[%010.-1x]\n", 1244);
//	printf("width 10 prec 1:		[%010.1x]\n", 1244);
//	printf("width 10 prec 6:		[%010.6x]\n", 1244);
//	printf("# width 10 prec 6:		[%#010.6x]\n", 1244);
//	printf("width 10 prec -6:		[%.-6x]\n", 1244);
//	printf("hh:				[%hhx]\n", 1244);
//	printf("h:				[%hx]\n", 1244);
//	printf("ll:				[%llx]\n", 1244);
//	printf("l:				[%lx]\n", 1244);
//	printf("z:				[%zx]\n", 1244);
//	printf("j:				[%jx]\n", 1244);

//	 //F, f:
//	printf("THEIR:\nnormal:				[%f]\n", 12.44);
//	printf("plus:				[%+f]\n", 12.44);
//	printf("zero:				[%0f]\n", 12.44);
//	printf("width 10:			[%10f]\n", 12.44);
//	printf("minus and width 10:		[%-10f]\n", 12.44);
//	printf("space:				[% f]\n", 12.44);
//	printf("hash:				[%#f]\n", 12.44);
//	printf("precyzja 1:			[%.1f]\n", 12.44);
////	printf("width 10 prec -1:		[%010.-1f]\n", 12.44);
//	printf("width 10 prec 1:		[%010.1f]\n", 12.44);
//	printf("width 10 prec 6:		[%010.6f]\n", 12.44);
//	printf("# width 10 prec 6:		[%#010.6f]\n", 12.44);
////	printf("width 10 prec -6:		[%.-6f]\n", 12.44);
////	printf("hh:				[%hhf]\n", 12.44);
////	printf("h:				[%hf]\n", 12.44);
////	printf("ll:				[%llf]\n", 12.44);
//	printf("l:				[%lf]\n", 12.44);
////	printf("z:				[%zf]\n", 12.44);
////	printf("j:				[%jf]\n", 12.44);
//
//	ft_printf("MINE:\nnormal:				[%f]\n", 12.44);
//	ft_printf("plus:				[%+f]\n", 12.44);
//	ft_printf("zero:				[%0f]\n", 12.44);
//	ft_printf("width 10:			[%10f]\n", 12.44);
//	ft_printf("minus and width 10:		[%-10f]\n", 12.44);
//	ft_printf("space:				[% f]\n", 12.44);
//	ft_printf("hash:				[%#f]\n", 12.44);
//	ft_printf("precyzja 1:			[%.1f]\n", 12.44);
////	printf("width 10 prec -1:		[%010.-1f]\n", 12.44);
//	ft_printf("0 width 10 prec 1:		[%010.1f]\n", 12.44);
//	ft_printf("0 width 10 prec 6:		[%010.6f]\n", 12.44);
//	ft_printf("# width 10 prec 6:		[%#010.6f]\n", 12.44);
////	printf("width 10 prec -6:		[%.-6f]\n", 12.44);
////	printf("hh:				[%hhf]\n", 12.44);
////	printf("h:				[%hf]\n", 12.44);
////	ft_printf("ll:				[%llf]\n", 12.44);
//	ft_printf("l:				[%lf]\n", 12.44);
////	ft_printf("z:				[%zf]\n", 12.44);
////	ft_printf("j:				[%jf]\n", 12.44);


//	// rest:
	int ret1 = 0, ret2 = 0;


//	ret2 = ft_printf("MINE %05d", -42);
//	ft_printf("05d : %05d\n", -42);
//	ft_printf("010d : %++10d\n", -42);
//	ft_printf("10d : %10d\n", -42);
//	ft_printf("%05d", 42);
//	printf(":		[%%]\n");
//	printf(" :		[% %]\n");
//	printf(".1:		[%.1%]\n");
//	printf(".10:		[%.10%]\n");
//	printf("-10:		[%-10%]\n");
//	printf("t: @main_ftprintf: %####00000 33..1..d\n", 256);
//	ft_printf("@main_ftprintf: %####00000 33..1..d\n", 256);
//	ft_printf(" :		[% %]\n");
//	ft_printf(".1:		[%.1%]\n");
//	ft_printf(".10:		[%.10%]\n");
//	ft_printf("-10:		[%-10%]\n");
//	ft_printf(".0:		[%.0%]\n");
//	printf("010d : %++10d\n", -42);
//	printf("10d : %10d\n", -42);
//	printf("+10d : %+010d\n", +42);
//	printf("05d : %05d\n", -42);
//	printf("05d : %05d\n", -42);
//	ret1 = printf("-5:		[%-5%]\n");
//	ret1 = printf(".-3:		[%+ .3%]\n");
//	ret1 = printf("10:		[%010%]\n");
//	ret1 = printf("# 10 .2:	[%#10.2%]\n");
//	ret1 = printf("++:		[%++%]\n");
//	ret2 = ft_printf("%%\n", 1.9900);
//	printf("\n\n1: %d, 2: %d", ret1, ret2);

//	ft_printf("ret1: %d, ret2: %d\n", ret1, ret2);
//	printf("PRINTF: [%.-7O] haha\n", 110);
//	ft_printf("FT_PRINTF: [%+.-7O] haha new arg: [%s]\n", 110, "I'm working!");
//	printf("PRINTF: [%-3.1d] haha\n", 0);
//	ft_printf("FT_PRINTF: [%-3.1d] haha\n", 0);
//	printf("PRINTF: [%01.0c] haha\n", 'H');
//	ft_printf("FT_PRINTF: [%01.0c] haha\n", 'H');
//	printf("PRINTF: [%.0s] haha\n", "Jestem Pola");
//	ft_printf("FT_PRINTF: [%.0s] haha\n", "Jestem Pola");
//
//	printf ("%*d\n", 20, 5);
//	printf ("precyzja d, i o, u, x, X - 1, 200: %.1d\nprecyzja f, e, E - 1, 5.777: %.1f\nprecyzja g, G - 7, 25.625 && 2, 25.625: %.7g && %.2g\n", 200, 5.777, 25.625, 25.625);
//	//	ft_printf("To jest test %d\n", 5);
//	printf("%d\n", atoi("123c"));
	return (0);
}

//e1z2r8p24% lldb ./a.out
//(lldb) target create "./a.out"
//Current executable set to './a.out' (x86_64).
//(lldb) b main
//Breakpoint 1: where = a.out`main + 27 at test.c:196, address = 0x0000000100003eeb
//(lldb) run
//guiProcess 35647 launched: './a.out' (x86_64)
//guiProcess 35647 stopped
//* thread #1: tid = 0x29334, 0x0000000100003eeb a.out`main + 27 at test.c:196, queue = 'com.apple.main-thread', stop reason = breakpoint 1.1
//frame #0: 0x0000000100003eeb a.out`main + 27 at test.c:196
//193
//194
//195 	//	// rest:
//-> 196 		int ret1 = 0, ret2 = 0;
//197
//198 		ret1 = ft_printf("%d", -1);
//199 	//	ret1 = printf("-5:		[%-5%]\n");
//(lldb) gui
//(lldb) quit
