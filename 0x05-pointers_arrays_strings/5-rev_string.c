#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int tii = 0;
	int i;

	while (s[tii] != '\0')
	tii++;
	for (i = 0; i < tii; i++)
	{
		tii--;
		rev = s[i];
		s[i] = s[tii];
		s[tii] = rev;
	}
}
