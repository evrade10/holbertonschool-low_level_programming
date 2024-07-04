#include "main.h"
/**
 * factorial - calcul factoriel de n
 * @n: integer
 * Return: factorial(n)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n != 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
