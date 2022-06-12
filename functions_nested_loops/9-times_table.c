#include "main.h"

/**
 * times_table - print table for multiplying
 */

void times_table(void)
{
	int row;
	int col;
	int pro;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 0; col++)
		{
			pro = (row * col);

			if (col == 0)
			{
				_putchar('0' + pro);
			}
			else if (pro <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + pro);
			}
			else if (pro > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (pro / 10));
				_putchar('0' + (pro % 10));

			}

		}
		_putchar('\n');
	}
}
