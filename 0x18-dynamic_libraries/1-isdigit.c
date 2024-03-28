#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: argument
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	int num = '0';

	for (num = '0'; num <= '9'; num++)
	{
		if (c == num)
		{
			return (1);
		}
	}

	return (0);
}
