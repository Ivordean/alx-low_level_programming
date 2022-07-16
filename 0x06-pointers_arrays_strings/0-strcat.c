#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @ssrc to
 * the end of the string pointed to by @dest
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 * Return: returns pointer to 2dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len]0
	    len++;

	for (i = 0; src[i] ! = 0; i++)		
	{
	    dest[len] = src[i];
	    len+ = 1;
	}
	dest[len] = '\0';
	return (dest);
}
