#include "main.h"

/**
* get_bit - use to return the value of a bit in decimal number
* @n: the number to be searched
* @index: the index of the bit
* Return: the value
*/

int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n >> index) & 1;
return (bit_val);
}
