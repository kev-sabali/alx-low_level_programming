#include "main.h"

/**
 * prints_string - Prints a string
 * @str: The string to print
 *
 * Return: void
 */
void prints_string(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}

_putchar('\n');
}
