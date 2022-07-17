#include<stdio.h>
/**
 * main - entry point
 *
 * Desription: "prints the alphabets in the lower case and then in uppercase"
 *
 * Return: alway return 0
 *
 */
int main(void)
{
char e = 'a';
char f = 'A';
while (e <= 'z')
{
putchar (e);
e++;
}
while (f <= 'Z')
{
putchar (f);
f++;
}
putchar ('\n');
return (0);
}
