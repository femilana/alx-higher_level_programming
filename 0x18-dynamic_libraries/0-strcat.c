#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: argument
 * @src: argument two
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int num1, num2;

	num1 = 0;

	while (dest[num1] != '\0')
	{
		num1++;
	}

	num2 = 0;

	while (src[num2] != '\0')
	{
		dest[num1] = src[num2];
		num1++;
		num2++;
	}

	dest[num1] = '\0';

	return (dest);
}
