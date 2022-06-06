#include <stdio.h>
/**
* main - print the size of various types
*
* Description: prints the size of various types on the,
* computer it is compiled and run on
*
* Return: Always 0 (Success)
*/
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
printf("Size of int: %d bytes\n", sizeof(intType));
printf("Size of float: %d bytes\n", sizeof(floatType));
printf("Size of double: %d bytes\n", sizeof(doubleType));
printf("Size of char: %d byte\n", sizeof(charType));
return (0);
}
