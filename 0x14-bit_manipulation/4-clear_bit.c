#include "main.h"

/**
* clear_bit - use to set the value of a given bit from its value to 0
* @n: the pointer to the number we want to change
* @index: an index of the bit to be cleared
* Return: 1 when successful or -1 when it failss
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
