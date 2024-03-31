#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"


/**
 * _printf - Produces output according to a format
 * @format: string
 *
 * Return: The number of characters printed
 **/

int _printf(const char *format, ...)
{
	va_list cou;
	int size;

	if (format == NULL)
	{
		exit(98)
	}
	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(cou, format);
	size = handler(format, cou);

	_putchar(-1);
	va_end(cou);

	return (size);
}



