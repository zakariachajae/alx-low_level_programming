#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to a string
 * @c: character to locate in string
 *
 * Return: pointer to first occurrence of character c in string s, or NULL
 *         if character is not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return s;
s++;
}
if (*s == c)
return (s);
return (NULL);
}
