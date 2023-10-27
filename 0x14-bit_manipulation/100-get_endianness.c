#include "main.h"

/**
* get_endianness - this is use to check if a machine is a big or small endian
* Return: 0 if big and 1 if small
*/

int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}
