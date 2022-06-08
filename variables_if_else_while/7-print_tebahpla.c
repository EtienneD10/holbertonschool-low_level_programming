#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';
	char e = 'z';

	while (n =< e)
	{
		putchar(e--);
	}
	putchar('\n');

	return (0);
}
