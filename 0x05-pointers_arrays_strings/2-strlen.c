#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)

{
//counter = "c"

int c = 0;

for (; *s != '\0'; s++)
{
c++;
}

return (c);
}
