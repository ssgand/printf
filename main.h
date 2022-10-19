#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1024
#define UN_NEEDED(x) (void)(x)

/**
 * struct format - program to print in specific formats
 * @fmt: format
 *
 */

typedef struct format
{
	char fmt;
	int (*print_function)(va_list pars, int *, int);
}fmt;

int _printf(const char *format, ...);
int print_str(va_list pars, int *, int);

#endif
