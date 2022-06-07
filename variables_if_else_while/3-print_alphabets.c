#include <stdio.h>

/**
*main - print lowercase and uppercase a-zA-Z using putchar
*Return: Always 0 (Success)
*/

int main(void)
{
	char low = 'a';
	char up = 'A';

	while (low <= 'z')
	{
		putchar(ch_a);
		low++;
	}
	while (up <= 'ch_A')
	{
		putchar(up);
		up++;
	}
	putchar('\n');

	return (0);
}
