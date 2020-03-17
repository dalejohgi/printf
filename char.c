#include "holberton.h"
/**
 *_char - Funtion to print a char
 *@selector: List of arguments valist
 *Return: Number of bytes printed
 *
 */
int _char(va_list selector)
{
	char k = va_arg(selector, int);

	putchar(k);
return (1);
}

