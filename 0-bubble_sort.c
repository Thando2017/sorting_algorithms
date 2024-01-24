#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the Bubble Sort algorithm.
 *
 * @array: The array to be sorted.
 * @size:  The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, index;
    int tmp;
    int swapped;

    if (size < 2 || array == NULL)
        return;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;

        for (index = 0; index < size - i - 1; index++)
        {
            if (array[index] > array[index + 1])
            {
                tmp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = tmp;
                print_array(array, size);
                swapped = 1;
            }
        }

        // If no two elements were swapped in inner loop, array is sorted
        if (swapped == 0)
            break;
    }
}

