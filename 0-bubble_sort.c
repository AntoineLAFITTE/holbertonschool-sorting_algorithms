#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 * @array: The array to sort.
 * @size: The number of elements inside @array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swap_temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap_temp;
				print_array(array, size);
			}
		}
	}
}

