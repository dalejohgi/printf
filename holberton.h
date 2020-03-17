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
	int (*f)(void *);
} prin;
int _printf(const char *format, ...);
int print_numd();
int _char();
int _str();
int print_number();
int print_unsigned();
#endif
