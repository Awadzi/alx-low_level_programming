#include "main.h"
/**
* _strchr - Locate character
* @s: Input
* @c: Input
* Return: If c is found - a pointer to the first occurence
* If c is not found - NULL.
*/
char *_strchr(char *s, char c)
{
int i;
for (; s[i] >= '\0'; i++)
if (s[i] == c)
return (&s[i]);
}
return (0);
}
