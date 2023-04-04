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
unsigned int i, j, count = 0;
int match;
for (i = 0; s[i] != '\0'; i++)
{
match = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
match = 1;
break;
}
}
if (match == 0)
return (count);
count++;
}
return (count);
}
