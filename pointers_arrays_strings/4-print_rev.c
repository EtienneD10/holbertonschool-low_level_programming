#include "main.h"

/**
 * print_rev - prints string backwards
 * @s: string
 * Return: void
**/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] == ' ')
	{	
		i++;
	}

	for (i = 0; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
