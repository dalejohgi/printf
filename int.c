#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
/**
 *print_number - print a number whit _putchar.
 *@selector: is a integer.
 */
void print_number(va_list selector)
{
	int i, d, k = 1, p = 1, j, larg, flag, n;

	n = (va_arg(selector, int));
	if (n == -2147483648)
	{
		n = n / 10;
		flag = 2;
	}
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	larg = n;
	while (larg / 10 > 0)
	{
		larg = larg / 10;
		k++;
	}
	for (i = k; i > 0; i--)
	{
		if (k != 1)
		{
		for (j = 2; j <= i; j++)
		{
			p = p * 10;
		}
		}
		d = n / p;
		_putchar(d + '0');
		n = n - p * d;
		p = 1;
	}
	if (flag == 2)
	{
		_putchar('8');
	}
}

