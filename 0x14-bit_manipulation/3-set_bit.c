#include "main.h"

/**
* set_bit - use to set a bit at a given index to the value of 1
* @n: pointer to the number to be changed
* @index: the index of the bit we want to set to 1
* Return: 1 when success or -1 for faailure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
