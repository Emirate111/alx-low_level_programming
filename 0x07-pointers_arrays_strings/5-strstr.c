#include "main.h"
/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *| = haystack;
		char *p = needle;

		while (* | == *p && *p != '\0')
		{
			| ++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
