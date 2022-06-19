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
	int i;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
