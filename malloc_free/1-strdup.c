#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory...
 * @str: string pointer
 *
 * Description -
 * Return: a pointer to the duplicate string.
 */

char *_strdup(char *str)
{
	int i, j;
	char *duplicate;

	for (i = 0; str[i]; i++)
		;
	duplicate = malloc(i + 1);
	if (duplicate == NULL)
		return (NULL);
	/*Copy the string*/
	for (j = 0; str[j] != '\0'; j++)
	{
		duplicate[j] = str[j];
	}
	duplicate[j] = '\0';
	return (duplicate);
}
