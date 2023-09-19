#include "main.h" 
/**
 * swap two values of integers
 * 
 * @a: integer to swap 
 * @b: second integer to swap 
 * 
 * return : void 
*/
void swap(int *a, int *b) 
{
    int temp_variable = *a;
    
    *a = *b;
    *b = temp_variable;
}