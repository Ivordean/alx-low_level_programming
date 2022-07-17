/**
*main -entry point
*
* Return: always return 0
* Description: This program print alphabet a to z excluding q and e
*/
int main(void)
{
char a;

{
for (a = 'a'; a <= 'z'; a++)
{
if (a == 'q' || a == 'a')
continue;
}
putchar(a);
}
return (0);
}
