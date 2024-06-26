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

char *itoa(long int, int);

int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);


int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_rot(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);

typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif
