#ifndef _LIBRARIES_
#define _LIBRARIES_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#endif

#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 *struct functions - Struct of formats and functions
 *@lf: For letter format
 *@f: function print someting.
 */
typedef struct functions
{
	char *lf;
	void (*f)(void *);
} prin;
int _printf(const char *format, ...);
int _putchar(char c);
void _char(void);
void _str(void);
void print_number(void);
#endif