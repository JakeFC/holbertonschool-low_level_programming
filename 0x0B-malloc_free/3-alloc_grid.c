#include "holberton.h"
#include <stdlib.h>
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
	int *a;
	int i, ii;

	if (width < 1 || height < 1)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height + (sizeof(int) * width));
	a = (int *)(arr + height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		arr[i] = (a + width * i);
	for (i = 0; i < height; i++)
		for (ii = 0; ii < width; ii++)
		{
			arr[i][ii] = 0;
		}
	return (arr);
}
