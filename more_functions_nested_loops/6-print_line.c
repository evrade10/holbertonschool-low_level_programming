#include "main.h"
/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
int b;

if (n > 0)
{
for (b = 0; b < n; b++)
_putchar('_');
}

_putchar('\n');
}
