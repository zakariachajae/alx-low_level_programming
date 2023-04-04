#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string of characters to search for
 *
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
char a;
unsigned int count = 0;
int found;
while (*s)
{
found = 0;
for (*a = accept; *a; a++)
{
if (*s == *a)
{
count++;
found = 1;
break;
}
}
if (!found)
return (count);
s++;
}
return (count);
}
