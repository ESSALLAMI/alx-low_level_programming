#include "main.h"
/**
*string_toupper - change all lowercase to yppercase
*@str: the string to be the changed
*Return:
*/
char *string_toupper(char *)
{
int index = 0;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}
