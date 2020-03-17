#include "holberton.h"
/**
 *_printf - Print acording to the format
 *@format: pointer to a string
 *Return: Zero if success
 *
 *
 */
int _printf(const char * const format, ...)
{
	int i = 0, j = 0;
	prin selec[] = {
		{"c", _char},
		{"s", _str},
		{"i", print_number},
		{NULL, NULL}
		};
	va_list selector;

	va_start(selector, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (selec[j].lf != NULL)
			{
				if (selec[j].lf[0] == format[i + 1])
				{
					selec[j].f(selector);
					i++;
					break;
				}
				else
					j++;
			}
			if (selec[j].lf == NULL)
				_putchar(format[i]);
		}
		else
		{
			_putchar(format[i]);
		}
	i++;
	}
return (0);
}
