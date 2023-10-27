#include "main.h"

/**
* flip_bits - this is use to count the number of bits we are changing
* from one number to another
* @n: the 1st number
* @m: the 2nd number
* Return: the number of bitsto  changee
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}
