#include "function_pointers.h"

/**
 * array_iterator -executes a function given as a
 * parameter on each element of an array.
 * @array: input integer array.
 * @size: sizeof the array.
 * @action: pointer to the function.
 *
 * Return: no return.
 */

void array_iteratior(int *array, size_t size, void (*action)(int))
{
	unsignedint i;

	if (array && action)

		for (i = 0; i < size; i++)
			action(array[i]);
}
