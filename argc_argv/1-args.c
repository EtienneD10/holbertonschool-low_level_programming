#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments passed to program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("argc = %d\n", argc - 1);

	return (0);
}
