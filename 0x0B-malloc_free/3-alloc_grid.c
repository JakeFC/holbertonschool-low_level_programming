#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - allocates a 2d array of integers with given dimensions which
 * are all 0
 * @width: width of array
 * @height: height of array
 * Return: pointer to array, or 0 on failure/ nonexistent dimension
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, ii;

	if (width < 1 || height < 1)
		return (0);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		return (0);
	}
	for (i = 0; i < height; i++)
		for (ii = 0; ii < width; ii++)
		{
			arr[i][ii] = 0;
		}
	return (arr);
}
