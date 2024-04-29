#include "sort.h"

/**
 * bubble_sort - a function that sort an array
 * and prints out the array after every swap
 *
 * @array: the array to sort out
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int *my_array;
	size_t i, k;
	int n, m;

	my_array = array;
	for (k = 0; k < size; k++)
	{
		for (i = 0; i < size; i++)
		{
			n = my_array[i];
			m = my_array[i + 1];
			if (n > m)
			{
				my_array[i] = m;
				my_array[i + 1] = n;
				print_array(my_array, size);
			}
		}
	}
}
