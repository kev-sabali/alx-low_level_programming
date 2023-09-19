#include "main.h"
/**
 * swap two values of integers
 *
 * @a: integer to swap_int
 * @b: second integer to swap_int
 *
 * return : void
*/
void swap_int(int *a, int *b)
{
int temp_variable = *a;
*a = *b;
*b = temp_variable;
}