#include "main.h"
/**
 * _strcat - it concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int p;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	p = 0;
	while (src[p] != '\0')
	{
		dest[i] = src[p];
		i++;
		p++;
}

	dest[i] = '\0';
	return (dest);
}
