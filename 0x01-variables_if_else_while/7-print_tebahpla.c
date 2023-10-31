#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int al;
for (al = 'z'; al >= 'a'; al--)
{
putchar(al);
}
putchar('\n');
return (0);
}
