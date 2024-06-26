#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int lg = 0, i = 0;
char t;
while (s[i++])
lg++;
for (i = lg - 1; i >= lg / 2; i--)
{
t = s[i];
s[i] = s[lg - i - 1];
s[lg - i - 1] = t;
}
}
