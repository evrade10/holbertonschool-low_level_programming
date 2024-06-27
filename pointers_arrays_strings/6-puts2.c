#include "main.h"
/**
 * puts2 - prints xters of a sting
 * @str: the used string reference
 *
 * Return: void
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
		c++;
	}
	_putchar('\n');
}
