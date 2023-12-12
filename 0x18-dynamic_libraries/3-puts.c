#include "main.h"
#include <unistd.h>
/**
 * _puts - Prints a string
 * @str: The string to print
 *
 * Return: void
 */
int _putchar(char c) {
    return write(1, &c, 1);
}
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}

_putchar('\n');
}

