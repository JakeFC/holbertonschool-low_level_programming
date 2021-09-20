#include "search_algos.h"

/**
 * print_array - prints a given array with start and end indices
 * @array: pointer to the first element of the array
 * @start: first index of the array to print
 * @end: last index of the array to print
 */
void print_array(int *array, int start, int end)
{
	printf("Searching in array: ");
	for (; start < end; start++)
	{
		printf("%d, ", array[start]);
	}
	printf("%d\n", array[end]);
}

/**
 * binary_search_recursive - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @value: value to search for
 * @start: first index to search in the array
 * @end: last index to search in the array
 * Return: the index where value is located, or -1 if not/NULL
 */
int binary_search_recursive(int *array, int value, int start, int end)
{
	int mid;

	if (start > end)
		return (-1);
	print_array(array, start, end);
	mid = (start + end) / 2;
	if (array[mid] == value)
		return (mid);
	else if (value < array[mid])
		return (binary_search_recursive(array, value, start, mid - 1));
	else
		return (binary_search_recursive(array, value, mid + 1, end));
}

/**
 * binary_search - calls the recursive function that uses the Binary search
 * algorithm to find a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located, or -1 if not/NULL
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (binary_search_recursive(array, value, 0, (int)size - 1));
}
