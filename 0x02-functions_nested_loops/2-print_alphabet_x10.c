#include "main.h"
/**
 * print_alphabet_x10 - that prints function a-z
 */
void print_alphabet_x10(void)
{ int ten;
char la;
	for (ten = 0; ten <= 9; ten++)
	{
	for (la = 0; la <= 'z'; la++)
	_putchar(la);
		_putchar('\n');
	}
}
