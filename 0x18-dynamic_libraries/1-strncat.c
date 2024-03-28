#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int num1;
	int num2;

	num1 = 0;
	while (dest[num1] != '\0')
	{
		num1++;
	}
	num2 = 0;
	while (num2 < n && src[num2] != '\0')
	{
	dest[num1] = src[num2];
	num1++;
	num2++;
	}
	dest[num1] = '\0';

	return (dest);
}
