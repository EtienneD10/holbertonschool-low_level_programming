#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * rev_string - reverse a string
 * @s: char
 *
 * Description - reverse a string,
 *the -1 is for starting in the last character before null.
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char k;

	for (j = 0; s[j] != '\0'; j++)
	;
	for (i = 0, j -= 1; i < j; i++, j--)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
	}
}
