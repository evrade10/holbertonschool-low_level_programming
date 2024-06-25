#include "main.h"
/**
 *more_numbers - Prints 10 the numbers from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
int c, d;
for (c = 0; c < 10; c++)
{
for (d = 0; d < 15; d++)
{
if (d > 9)
_putchar(d / 10 + '0');
_putchar(d % 10 + '0');
}
_putchar('\n');
}
}
