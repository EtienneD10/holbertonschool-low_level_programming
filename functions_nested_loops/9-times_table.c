#include "main.h"

/**
 * times_table - print table for multiplying
 */

void times_table(void)
{
	int i;
	int f;
	int n;

	for (f = 0; f <= 9; f++)
	{
		for (i = 0; i <= 0; i++)
		{
			n = (f * i);

			if (i == 0)
			{
				_putchar('0' + n);
			}
			else if (n <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + n);
			}
			else if (n > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));

			}

		}
		_putchar('\n');
	}
}
