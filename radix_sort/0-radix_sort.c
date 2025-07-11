#include "sort.h"

/**
* getMax - helper function that finds the highest value in the array.
*          This will help us know how any times we need to iterate
*          through the array.
* @array: The array of integers to be sorted
* @size: Number of elements in @array.
*
* Return: int - the heigest value.
*/
int getMax(int *array, size_t size)
{
	int max_value = array[0];
	size_t i;

	for (i = 1; i < size; i++)
	{
		if (array[i] > max_value)
			max_value = array[i];
	}

	return (max_value);
}

/**
* radix_sort - function that sorts and print an array of integers
*               by least significant digit (last digit).
*               The aray will be printed each time the significant digit
*               is increased.
*
* @array: The array of int to sort
* @size: Number of elements in @array
 */
void radix_sort(int *array, size_t size)
{
	int max_value = getMax(array, size);
	int *output, exp, digit, i;
	int count[10] = {0};
	size_t j;

	if (!array || size < 2)
		return;

	output = malloc(sizeof(int) * size);
	if (!output)
		return;

	for (exp = 1 ; max_value / exp > 0 ; exp *= 10)
	{
		for (i = 0; i < 10; i++)
			count[i] = 0;
		for (j = 0; j < size; j++)
		{
			digit = (array[j] / exp) % 10;
			count[digit]++;
		}

		for (i = 1; i < 10; i++)
			count[i] += count[i - 1];

		for (i = size - 1; i >= 0; i--)
		{
			digit = (array[i] / exp) % 10;
			output[count[digit] - 1] = array[i];
			count[digit]--;
		}

		for (j = 0; j < size; j++)
			array[j] = output[j];

		print_array(array, size);
	}

	free(output);
}
