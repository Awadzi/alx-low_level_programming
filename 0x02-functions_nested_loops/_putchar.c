#include <main.h>
#include <unistd.h>
/**
*_putchar - writes the character c to stdout
*@c: The character to print
*
*Return: On 1 Sucess 1.
*On error, -1 to returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

