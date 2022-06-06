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
printf("Size of a char: %d byte(s)\n", sizeof(charType));
printf("Size of an int: %d byte(s)\n", sizeof(intType));
printf("Size of a long int: %d byte(s)\n", sizeof(longType));
printf("Size of a long long int: %d byte(s)\n", sizeof(longlongType));
printf("Size of a float: %d byte(s)\n", sizeof(floatType));
return (0);
}
