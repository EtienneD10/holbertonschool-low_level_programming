#include "main.h"
#include <stdio.h>
#include <stddef.h>

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char k;	
	
	for (j = 0; s[j] != '\0'; j++)
		;
	for (i = 0, j -= 1; i < j; i++, j--)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;	
	}
}
