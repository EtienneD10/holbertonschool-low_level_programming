#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - entry point
*
*Return: Always 0 (succes)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	printf("Last digit of %i is %i and is ", n);
	if (n > 5)
	{
		printf("greater than 5\n");
}
	else if (n == 0)
{
		printf("0\n");
}
	else
{
	printf("greater than 5\n");
}
return (0);
}
