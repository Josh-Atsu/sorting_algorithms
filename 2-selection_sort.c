#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: the array to sort
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	int *my_array;
	size_t i, j;
	int curr_idx, curr_value, small_idx;

	my_array = array;
	for (i = 0; i < size - 1; i++)
	{
		curr_idx = i;
		curr_value = my_array[i];
		small_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (my_array[j] < my_array[small_idx])
			{
				small_idx = j;
			}
		}
		my_array[curr_idx] = my_array[small_idx];
		my_array[small_idx] = curr_value;
		print_array(my_array, size);
	}
}
