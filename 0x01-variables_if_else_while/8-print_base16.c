#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nm, NM;
for (nm = '0'; nm <= '9'; nm++)
{
putchar(nm);
}
for (NM = 'a'; NM <= 'f'; NM++)
{
putchar(NM);
}
putchar('\n');
return (0);
}
