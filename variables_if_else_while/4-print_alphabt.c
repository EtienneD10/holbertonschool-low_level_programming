#include <stdio.h>

/**
*main - print lowercase and uppercase a-zA-Z using putchar
*Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	if ((ch != 'q') && (ch != 'e'))
	{
		putchar(ch);
	}
		ch++;
	}
putchar('\n');

return (0);
}
