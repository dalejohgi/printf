#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
/**
 *print_number - print a number whit putchar.
 *@selector: is a integer.
 *Return: 0.
 */
int print_number(va_list selector)
{
	int i, d, k = 1, p = 1, j, larg, flag = 0, neg = 0, n, len;

	n = (va_arg(selector, int));
	if (n == -2147483648)
	{
		n = n / 10;
		flag = 1;
	}
	if (n < 0)
	{
		n = -n;
		neg = 1;
		putchar('-');
	}
	larg = n;
	while (larg / 10 > 0)
	{
		larg = larg / 10;
		k++;
	}
	len = k;
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
		putchar(d + '0');
		n = n - p * d;
		p = 1;
	}
	if (flag == 1)
		putchar('8');
	if (neg == 1)
		return (len + neg + flag);
	return (len);
}
/**
 *print_numd - print a number whit putchar.
 *@selector: is a integer.
 *Return: 0
 */
int print_numd(va_list selector)
{
	int i, d, k = 1, p = 1, j, larg, flag = 0, n, len, neg = 0;

	n = (va_arg(selector, int));
	if (n == -2147483648)
	{
		n = n / 10;
		flag = 1;
	}
	if (n < 0)
	{
		n = -n;
		neg = 1;
		putchar('-');
	}
	larg = n;
	while (larg / 10 > 0)
	{
		larg = larg / 10;
		k++;
	}
	len = k;
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
		putchar(d + '0');
		n = n - p * d;
		p = 1;
	}
	if (flag == 1)
		putchar('8');
	if (neg == 1)
		return (len + neg + flag);
	return (len);
}

/**
 *print_unsigned - print a number whit putchar.
 *@selector: is a integer.
 *Return: 0.
 */
int print_unsigned(va_list selector)
{
	int i, d, k = 1, p = 1, j, larg, len;
	unsigned int n;

	n = (va_arg(selector, unsigned int));

	larg = n;
	while (larg / 10 > 0)
	{
		larg = larg / 10;
		k++;
	}
	len = k;
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
		putchar(d + '0');
		n = n - p * d;
		p = 1;
	}
	return (len);
}
