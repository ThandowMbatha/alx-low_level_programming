#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - it checks if string have digit.
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declares variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*counts string*/

	{
		if (!isdigit(str[count])) /*checks if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - it Prints the name of the program.
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declares variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*it goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> converts string to int*/
			sum += str_to_int;
		}

		/*checks if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*prints sum*/

	return (0);
}
