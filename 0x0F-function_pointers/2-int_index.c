#include "function_pointers.h"
/**
 * int_index - returns the index of the first element in the array
 * @array: a array
 * @size: size of elem in an array
 * @cmp: a pointer to func between the 3 in main
 * Return: Always 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
