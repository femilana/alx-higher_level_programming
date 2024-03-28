#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: input s
 * @accept: input accept
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				n++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
