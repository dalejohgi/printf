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
void print_numd();
void _char();
void _str();
void print_number();
void print_unsigned();
#endif
