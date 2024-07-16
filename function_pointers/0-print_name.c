#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: name of person
 * @f: funtion to run
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
