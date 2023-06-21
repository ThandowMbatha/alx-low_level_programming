#include "main.h"

/**
 * print_alphabe_x10 - prints 10 times the alphabet
 * 
 * Return: always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int c;
	int i;

	for (c = 1; c <= 10; c++)
	{
		for (i = 97; i <=122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
