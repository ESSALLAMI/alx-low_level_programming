#include "main.h"
/**
*_puts_recursion - function like puts ();
*@s: input
*Return: Always 0 (Success)
*/
void _puts_recursion(char *s)
{
s = "lpa\0";
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
