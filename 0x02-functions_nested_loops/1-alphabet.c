#include "main.h"

/**
 * print_alphabet - print all the the alphabet in lowercase
 */

void print_alphabet(void)
{
	char alp;

	for (alp = 97; alp <= 122; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
