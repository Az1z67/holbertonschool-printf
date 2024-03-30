#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *, ...);

int _putchar(char);
int buffer(char);

int _strlen(const char *);
int print(char *);

int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif
