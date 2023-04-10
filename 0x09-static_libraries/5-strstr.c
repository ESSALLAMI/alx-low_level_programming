#include "main.h"
/**
* _strstr - Entry point
*@haystack: input
*@needie: input
*Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needie)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needie;
while (*l == *p && *p != '\0')
{
l++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}
