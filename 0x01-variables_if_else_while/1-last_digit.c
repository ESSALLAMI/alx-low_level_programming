#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints a text according number 
*Return:Always (Success)
*/
int main(void)
{
int n, laste;
srand(time(0));
n = rand() - RAND_MAX / 2;
laste = n %10;
if (laste > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, laste);
}
else if (laste == 0)
{
printf("last digit of %d is %d and is 0\n", n, laste);
{
else if (laste < 6 && laste != 0)
{
printf("laste digit of %d is %d and 0\n", n, laste);
}
return (0);
}

