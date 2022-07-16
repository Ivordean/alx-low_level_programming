#include "main.h"
/**
* _strncat -> function to append some charx
* @dest: the first string parameter
* @src: second steing parameter
* @n: 3rd parameter
* Return: string
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);

}
