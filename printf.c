#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list cou;
	unsigned int j = 0, i = 0;

	if (format == NULL)
	{
		exit(98)
	}
	va_start(cou, format);
	for (j = 0;*(format + j) != '\0'; j++)


