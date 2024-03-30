#include "holberton.h"

int _putchar(char c)
{
	return (buffer(c));
}


/**
 * buffer - save the character in a buffer
 * @c: character
 *
 * Return: 1
 **/

int buffer(char c)
{
	static char buffering[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buffering, i);
		i = 0;
	}

	if (c != -1)
		buffering[i++] = c;

	return (1);
}
