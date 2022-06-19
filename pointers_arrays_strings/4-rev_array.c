#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i, j = 0;
	int k = n - 1; /* omit null terminator in length */

	while (j < k)
	{
		i = *(a + j);
		*(a + j) = *(a + k);
		*(a + k) = i;
		j++, k--;
	}
}
