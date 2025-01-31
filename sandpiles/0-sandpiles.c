#include <stdlib.h>
#include <stdio.h>

#include "sandpiles.h"


/**
* print_grid - Print 3x3 grid
* @grid: 3x3 grid
*
*/
static void print_grid(int grid[3][3])
{
	int i, j;

	printf("=\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
* is_stable - function taht checks if the sandpile is stable:
* no cell should contain more than 3 grains
* @grid1: The sandpile to check
* Return: 1 if the sandpile is stable, 0 otherwise
*/
int is_stable(int grid1[3][3])
{
	int i, j;

	for (i = 0; i < 3 ; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid1[i][j] > 3)
			{
				return (0);
			}
		}
	}
	return (1);
}


/**
* topple - function that handles toppling of the sandpile:
* a cell containing more than 3 distributes all its grains
* on adjacent cells (if none, grain is 'lost')
*
* @grid1: The sandpile that needs toppling
* Return: grid1 once toppled
*/
void topple(int grid1[3][3])
{
	int i = 0, j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid1[i][j] > 3)
			{
				grid1[i][j] -= 4;
				if (i > 0)
					grid1[i - 1][j] += 1;
				if (i < 2)
					grid1[i + 1][j] += 1;
				if (j < 2)
					grid1[i][j + 1] += 1;
				if (j > 0)
				grid1[i][j - 1] += 1;
			}
		}
	}
}

/**
* sandpiles_sum - function that computes the sum of two sandpiles,
* handles toppling and ensures stability (no more than 3 'grains' per cell).
*
* @grid1: first sandpile
* @grid2: second sandpile to add to grid1
* Return: grid1 (when stable)
*/
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i = 0, j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
		}
	}
	while (!is_stable(grid1))
	{
		print_grid(grid1);
		topple(grid1);
	}
}
