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
	size_t i, j, k = 0;
	int sm_value, n1;

	my_array = array;
	sm_value = my_array[0];
	for (i = 0; i < size; i++)
	{
		n1 = my_array[i];
		sm_value = my_array[i];
		for (j = i + 1; j < size; j++)
		{
			if (my_array[j] < sm_value)
			{
				k = j;
				sm_value = my_array[k];
			}
		}
		my_array[i] = sm_value;
		my_array[k] = n1;
		print_array(my_array, size);
	}
}
