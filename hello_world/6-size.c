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
long longType;
char charType;
long long int longlongType;
printf("Size of int: %d byte(s)\n", sizeof(charType));
printf("Size of float: %d byte(s)\n", sizeof(intType));
printf("Size of double: %d byte(s)\n", sizeof(longType));
printf("Size of char: %d byte(s)\n", sizeof(longlongType));
printf("Size of char: %d byte(s)\n", sizeof(floatType));
return (0);
}
