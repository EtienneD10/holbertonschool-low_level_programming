#include "main.h"

/**
 * _isdigit - check f the char is a digit
 * @c: char
 *
 * Description: the function check if the input is a digit and return 1
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
