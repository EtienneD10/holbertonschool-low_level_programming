#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - entry now
*
*Return: 0(succes)
*/
int main(void)
{
	int n;
	/* declaring the varables */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* printing the variable n in each case*/
	if (n > 0)
		printf("%d is positive\n", n);
	else
		if (n == 0)
			printf("%d is zero\n", n);
		else
			printf("%d is negative\n", n);
	return (0);
}
