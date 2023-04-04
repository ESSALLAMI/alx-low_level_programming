#include "main.h"
/**
*_memset - fille memory areaa pointed to by s with the constant byte b
*@s:  pointer to the memory area
*@b: constant
*@n: max bytes to use
*Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
}
