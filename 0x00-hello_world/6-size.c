/**
* main - Entry point
*
* Return: Always 0 (success)
*/

int main(void)
{
char acharacter;
int aint;
long along;
long long alonglong;
float afloat;

printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
printf("Size of an in: %lu byte(s)\n", sizeof(aint));
printf("size of a long int: %lu byte(s)\n", sizeof(along));
printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglong));
printf("Size of a float: %lu byte(s)\n", sizeof(afloat));

return (0);
}
