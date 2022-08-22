#include "main.h"
/**
* _memset -> function that copies memory area
* @s: pointer that point to a memory area
* @b: the constant byte to be inserted in the memory are pointed to by s
* @n: first n bytes of the memory area to be filled
* Return: return a pointer to the memory area- (s)
*/
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
