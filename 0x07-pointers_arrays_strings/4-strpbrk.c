#include "main.h"
/**
* _strpbrk -> function that searches a string for any of a set of bytes.
* @s: the string to be checked with xter in accept
* @accept: the string bytes to be checked with that of s
* Return: Returns a pointer to the byte in s that matches the bytes in accept,
* or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}
