#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: is a character ascii
 *
 * Return: 1 (if letter)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	{
		return (0);
	}
}
