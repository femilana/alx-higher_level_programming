#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: argument
 * Return: num
 */

int _strlen(char *s)
{
	int num = 0;

	while (*s != '\0')
	{
		num++;
		s++;
	}

	return (num);
}
