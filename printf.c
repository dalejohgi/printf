#include "holberton.h"
/**
 *_printf - Print acording to the format
 *@format: pointer to a string
 *Return: Zero if success
 */
int _printf(const char * const format, ...)
{
	int i = 0, j = 0, r = 0;
	prin selec[] = { {"c", _char}, {"s", _str}, {"i", print_number},
		{"d", print_numd}, {"u", print_unsigned}, {NULL, NULL} };
	va_list selector;

	va_start(selector, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '%')
			i++;
		if (format[i] == '%')
		{
			j = 0;
			while (selec[j].lf != NULL)
			{
				if (selec[j].lf[0] == format[i + 1])
				{
					r = r + selec[j].f(selector);
					i++;
					break;
				}
				else
					j++;
			}
			if (selec[j].lf == NULL)
			{
				putchar(format[i]);
				r++;
			}
		}
		else
		{
			putchar(format[i]);
			r++;
		}
	i++;
	}
	va_end(selector);
	return (r);
}
