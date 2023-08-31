#include "main.h"

/**
* get_bit - returns the value of bit at an index in a decimal num.
* @n: The number to search
* @index: An index of the bit
* Return: A value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;

if (index > 63)
return (-1);

bit_val = (n >> index) & 1;

return (bit_val);
}
