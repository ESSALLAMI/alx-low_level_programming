#include "main.h"
/**
*_print_rev_recursion - Prints a string in reverse .
*@s: the string to be printed
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
