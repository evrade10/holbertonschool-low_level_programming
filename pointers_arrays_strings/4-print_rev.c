#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
int ang = 0, i;
while (*(s + ang) != '\0')
{
ang++;
}
for (i = ang - 1; i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
