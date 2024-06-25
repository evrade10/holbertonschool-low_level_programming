#include "main.h"
/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
int b;
int c;
if (n <= 0)
_putchar('\n');
for (b = 0; b < n; b++)
{
for (c = 0; c < b; c++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
