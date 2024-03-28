#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: starting address of memory that will be filled
 * @b: desired value
 * @n: number of bytes that will be changed
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int num = 0;

	for (; n > 0; num++)
	{
		s[num] = b;
		n--;
	}
	return (s);
}
