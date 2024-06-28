#include "main.h"

/**
* _strncat - Concatenates two strings.
*
* @dest: destination.
* @src: source.
* @n: amount of bytes used from src.
* Return: the pointer to dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int a1 = 0, a2 = 0;

while (*(dest + a1) != '\0')
a1++;

while (a2 < n)
{
if (*(src + a2))
{
*(dest + a1) = *(src + a2);
a1++;
a2++;
}
else
break;
}
return (dest);
}
