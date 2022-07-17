#include<stdio.h>
/**
  * main - entry point
  *
  * Description: This program prints the letters a to z
  *
  * Return: alway return 0
  */
int main(void)
{
char alphabets;
for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
putchar(alphabets);
putchar('\n');
return (0);
}
