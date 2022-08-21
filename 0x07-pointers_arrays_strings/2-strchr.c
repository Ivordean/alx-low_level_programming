#include "main.h"
/**
* _strchr -> function that locates a character in a string.
* @s: first string
* @c: char to be checked for occurrence in string s
* Return: returns a pointer to the first occurrence of the xter c in string s
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
		}
		return (s);

	}

	return ('\0');
}
