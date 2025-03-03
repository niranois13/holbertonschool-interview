#include <stdlib.h>
#include <stdio.h>

#include "palindrome.h"

/**
 * is_palindrome - Function that checks if a given number is a palindrome
                    it reverses the given number and then compares the two
 * @n: Given number to be checked
 * Return: 1 if given numbe is a palindrome, 0 otherwise
 */
int is_palindrome(unsigned long n)
{
	unsigned long n_copy, n_reversed = 0;

	n_copy = n;

	while (n_copy != 0)
	{
		n_reversed = n_reversed * 10;
		n_reversed = n_reversed + n_copy % 10;
		n_copy = n_copy / 10;
	}
	if (n == n_reversed)
		return (1);
	return (0);
}