#include "main.h"

/**
 * puts2 - print every other character
 * @str: char
 *
 * Description - partition % 2 the characters.
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	for (i = 0; str[i] != '\0'; i++)
	;
	for (j = 0; j <= i; j = j + 2)
	{
		if (str[j] != '\0')
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
