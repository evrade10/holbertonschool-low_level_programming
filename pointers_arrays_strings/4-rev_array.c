#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: Pointer to array
 * @n: Pointer of elements of an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c, h;

	n = n - 1;
	h = 0;
	while (h <= n)
	{
		c = a[h];
		a[h++] = a[n];
		a[n--] = c;
	}
}
