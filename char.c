#include "holberton.h"
/**
 *_char - Funtion to print a char
 *@selector: List of arguments valist
 *
 *
 */
void _char(va_list selector)
{
	char k = va_arg(selector, int);

	putchar(k);
}

