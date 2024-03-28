#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * The _memcpy() function copies n bytes from memory
 * area src to memory area dest
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * *@n: the number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
