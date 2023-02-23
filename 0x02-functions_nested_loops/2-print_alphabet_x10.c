#include "main.h"
/**
 * print_alphabet_x10 - that prints function a-z
 */
void print_alphabet_x10(void)
{ int i;
char j;
	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 'z'; j++)
	_putchar(j);
		_putchar('\n');
	}
}
