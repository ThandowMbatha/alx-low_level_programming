#include "main.h"
/**
 * print_rev - Prints in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int thando = 0;
	int o;

	while (*s != '\0')
	{
		thando++;
		s++;
	}
	s--;
	for (o = thando; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
