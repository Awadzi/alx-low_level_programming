#include "main.h"

/**
* binary_to_uint - used to converts binary number to  an unsigned int
* @b: the str that contains the  binary number
* Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int len;
size_t i = 0;
size_t j = 0;
size_t sum = 0;
size_t pow = 1;
int base = 2;
if (b == NULL)
	return (0);
for (len = 0; b[len] != '\0'; len++)
	;
if (len == 1 && (b[0] == '0' || b[0] == '1'))
	return (b[0] - 48);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
	return (0);
}
}

