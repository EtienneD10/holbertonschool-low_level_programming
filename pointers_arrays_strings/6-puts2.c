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

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
