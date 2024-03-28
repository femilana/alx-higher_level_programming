#include "main.h"

/**
 * _puts - a function that prints a string,
 * followed by a new line, to stdout.
 * @s: argument
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}

	_putchar('\n');
}
