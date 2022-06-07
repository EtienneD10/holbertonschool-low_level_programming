#include <stdio.h>

/**
*main - print lowercase and uppercase a-zA-Z using putchar
*Return: Always 0 (Success)
*/

int main(void)
{
	char ch_a = "a";
	char ch_A = "A";

	while (ch_a <= "z")
	{
		putchar(ch_a);
		ch_a++;
	}
	while (ch_A <= "ch_A")
	{
		putchar("ch_A");
		ch_A++;
	}
	putchar(ch_a);
	putchar(ch_A);

	return (0);
}
