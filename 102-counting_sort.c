#include "sort.h"
#include <stdlib.h>

/**
 * counting_sort - Sorting arrays
 * using the counting sort algorithm
 * @array: the array to sort
 * @size: size of the array
 */

void counting_sort(int *array, size_t size)
{
	int *count;
	int large_num, k, j, n = 0;
	size_t i;

	if (array == NULL || size <= 1)
		return;
	large_num = array[0];
	for (i = 0; i < size; i++)
	{
		if (array[i] > large_num)
			large_num = array[i];
	}
	count = malloc(sizeof(large_num + 1));
	if (count == NULL)
		return;
	for (j = 0; j < large_num; j++)
		count[j] = 0;
	for (i = 0; i < size; i++)
	{
		k = array[i];
		count[k] += 1;
	}
	i = 0;
	for (j = 0; j <= large_num; j++)
	{
		k = j;
		while (count[k] > 0)
		{
			if (i < size)
			{
				array[i] = j;
				i++;
				n += 1;
			}
			count[k]--;
		}
		count[j] += n;
	}
	print_array(count, large_num + 1);
	free(count);
}
