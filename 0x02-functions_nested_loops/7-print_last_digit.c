#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @l: the input number as an integer
 *
 * Return: the last digit of the integer
 */
int print_last_digit(int l)
{
	int a;

	if (l < 0)
		l = -l;

	a = l % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}
