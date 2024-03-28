#include "main.h"

/**
 * _strstr - a function that locates a substring
 * The _strstr() function finds the first occurrence of the
 * substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: input haystack
 * @needle: input needle
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *f = haystack;
		char *p = needle;

		while (*f == *p && *p != '\0')
		{
			f++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
