#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: returns 1 if the character is uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
