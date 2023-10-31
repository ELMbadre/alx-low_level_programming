#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int al, AL;
for (al = 'a'; al <= 'z'; al++)
{
putchar(al);
}
for (AL = 'A'; AL <= 'Z'; AL++)
{
putchar(AL);
}
putchar('\n');
return (0);
}
