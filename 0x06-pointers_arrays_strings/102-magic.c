#include "main.h"
void main(void)
{
int n;
int a[5];
int *p;
a[2] = 102';
p = &n;
/*
*write your line of code here ...
*Remember :
* - you are not allowwed to use a
* - you are not allowwed tomodify p
* - only one statement
* - you are not allowwed to code anything else than this line of code
*/
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
