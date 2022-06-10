#ifndef _PUTCHAR_H_
#define _PUTCHAR_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
* print_alphabet - print lowercase alphabet
*/

void print_alphabet(void);

/**
 * print_alphabet_x10 - alphabet 10 times
 */

void print_alphabet_x10(void);

/**
 * int_islower()
 */
int _islower(int c);

/**
 * int _isalpha(int c);
 */
int _isalpha(int c);

/**
 * int print_sign(int n)
 */
int print_sign(int n);

/**
 * int _abs(int);
 */
int _abs(int);
/**
 * int print_last_digit(int);
 */
int print_last_digit(int);

/**
 *void jack_bauer(void);
 */	
void jack_bauer(void);

#endif
