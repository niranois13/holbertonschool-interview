#include "string.h"
#include "stdlib.h"
#include "stdio.h"
#include "holberton.h"


/**
* is_number - Helper function that makes an ASCII comparison
*               to check if args are int or not.
*
* @str: pointer to an array containing the ags to check for type.
*
* Return: 1 if number, 0 otherwise
 */
int is_number(char *str)
{
	int i = 0;

	if (!str || str[0] == '\0')
		return (0);

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}


/**
* _str_putchar - Helper function that allows _putchar to print strings.
*
* @str: The string to print with _putchar.
*
* Return: no return
*/
void _str_putchar(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}


/**
* multiply - core function that realizes the multiplication operation
*
* @num1: first number passed as arg
* @num2: second number passed as arg
*
* Return: No return
*/
void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2);
	int *result = malloc(sizeof(int) * (len1 + len2));
	int i, j;

	if (!result)
		exit(98);

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int sum = mul + result[i + j + 1];

			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
		_putchar('0');
	else
	{
		for (; i < len1 + len2; i++)
			_putchar(result[i] + '0');
	}

	_putchar('\n');
	free(result);
}


/**
* main - Entry point of the function, multiplies provided args
*
* @argc: number of command line arguments
* @argv: command line arguments
*
* Return: No return
 */
int main(int argc, char *argv[])
{
	char *error = "Error\n";

	if (argc != 3)
	{
		_str_putchar(error);
		exit(98);
	};

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		_str_putchar(error);
		exit(98);
	}

	multiply(argv[1], argv[2]);
}
