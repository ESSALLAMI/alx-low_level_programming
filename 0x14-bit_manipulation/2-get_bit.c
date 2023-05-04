#include "main.h"
/**
 * get_bit-prints the binary equivalent of a decimal num
*@n: string containing the binary number
*@index:a
*Return: num to print in binary
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n >> index) & 1;
return (bit_val);
}
