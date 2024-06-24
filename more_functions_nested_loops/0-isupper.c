#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}

int main(void)
{
    char test_chars[] = {'A', 'a', 'Z', 'z', '1', '!'};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < num_tests; i++) {
        _putchar(test_chars[i]);
        _putchar(':');
        _putchar(' ');
        _putchar(_isupper(test_chars[i]) + '0');
        _putchar('\n');
    }

    return (0);
}
