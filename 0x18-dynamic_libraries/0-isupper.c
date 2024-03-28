#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: argument
 * Return: 1 if c is uppercase or 0 if otherwise
 */

int _isupper(int c)
{
	char alpha = 'A';

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		if (c == alpha)
		{
			return (1); /* c is an uppercase letter */
		}
	}

	return (0); /* c is not an uppercase letter*/
}
