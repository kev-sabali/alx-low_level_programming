#include "main.h"
/**
 * swap_int - two values of integers
 *
 * @a: First integer to swap
 * @b: Second integer to swap
 *
 * Return : void
*/
void swap_int(int *a, int *b)
{
int temp_variable = *a;
*a = *b;
*b = temp_variable;
}