#include "main.h"
/**
 * _isdigit - check if a character is a digit
 * @x: The number to be checked
 * Return: 1 for a character tthat will be a digit or 0 for any else
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
