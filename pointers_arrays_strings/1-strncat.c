#include "main.h"

/**
 * *_strncat - concatenate two strings
 * @dest: char
 * @src: char
 * @n: int
 *
 * Description -
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; src[i] != '\0'; i++)

	for (j = 0; dest[j] != '\0'; j++)

	if (n > j)
	{
		for (k = i; src[k - 1] != '\0'; k++)
			dest[k] = src[k - 1];
		dest[k] = '\0';
	}
	else
	{
		for (k = i; k < n + i; k++)
			dest[k] = src[k - 1];
	}
	return (dest);
}
