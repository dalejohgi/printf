#include "holberton.h"
/**
 *_str - Print strings
 *@selector: List of arguments valist
 *Return: Number of bytes printed
 */
int _str(va_list selector)
{
	char *string;
	int i = 0, j = 0;

	string = va_arg(selector, char *);
	while (string[i] != '\0')
	{
		putchar(string[i]);
		i++;
		j++;
	}
return (j);
}
