#include "main.h"
/**
 * print_alphabet - Write a function that prints the alphabet,in lowercase
 * alphabet avec putcher.
 * Return: void
 */
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
